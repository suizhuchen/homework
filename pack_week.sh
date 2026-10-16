#!/usr/bin/env bash
# pack_week.sh — 把某一周的代码打包成 zip
#
# 用法:
#   ./pack_week.sh <week> [输出zip路径]
#
# 示例:
#   ./pack_week.sh 3              # 打包 week3/ -> ./week3.zip
#   ./pack_week.sh week6          # 支持带 week 前缀的写法
#   ./pack_week.sh 5 /tmp/5.zip   # 指定输出路径
#
# 说明:
#   - 归档内保留 weekN/ 目录结构（和已有的 week3.zip 格式一致）
#   - 只收录源码/文档/配置文件（与 .gitignore 的规则一致）
#   - 自动排除编译产物（可执行文件、*.o、*.out、*.exe 等）

set -euo pipefail

cd "$(dirname "$(readlink -f "$0")")"

if [[ $# -lt 1 ]]; then
    echo "用法: $0 <week> [输出zip路径]" >&2
    echo "示例: $0 3        或        $0 week3" >&2
    exit 1
fi

# ---- 解析参数: 3 / week3 / week3/ 都归一化为 week3 ----
week=${1%/}
if [[ $week =~ ^[0-9]+$ ]]; then
    week="week$week"
fi

if [[ ! -d $week ]]; then
    echo "错误: 目录不存在: $week" >&2
    exit 1
fi

out=${2:-"$week.zip"}
mkdir -p "$(dirname "$out")"

# ---- 收集要打包的文件 ----
list=$(mktemp)
trap 'rm -f "$list"' EXIT

# 目录本身也收录（带斜杠表示目录项），解压后能直接看到 weekN/ 目录
find "$week" -type d | sort | sed 's|$|/|' >> "$list"

n_code=0
n_skipped=0
while IFS= read -r f; do
    # 跳过输出文件自身（防止输出路径刚好在 week 目录里）
    [[ $f -ef $out ]] && continue

    case "$f" in
        # 源码
        *.c|*.cc|*.cpp|*.cxx|*.h|*.hh|*.hpp|*.hxx) ;;
        # 文档/数据
        *.md|*.txt|*.pdf|*.csv|*.in|*.dat) ;;
        # 配置
        *.json|*.jsonc|*.yml|*.yaml|*.toml|*.mk|*.cmake|*/Makefile) ;;
        # 其余一律视为编译产物或其他文件，不打包
        *)
            n_skipped=$((n_skipped + 1))
            continue
            ;;
    esac

    echo "$f" >> "$list"
    n_code=$((n_code + 1))
done < <(find "$week" -type f | sort)

if (( n_code == 0 )); then
    echo "错误: $week 下没有可打包的代码文件" >&2
    exit 1
fi

# ---- 生成 zip（不用 -r，只打包列表里明确列出的文件，避免混入编译产物）----
rm -f "$out"
zip -q "$out" -@ < "$list"

echo "✅ 已生成: $out"
echo "   收录 $n_code 个文件，跳过 $n_skipped 个编译产物/其他文件"
echo
echo "   归档内容:"
unzip -l "$out" | tail -n +4 | head -n -2 | awk '{print "     " $4}' | grep -v '^     $'
