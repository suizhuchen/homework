#include <stdio.h>

int main()
{
    // 此题本质鸡兔同笼
    int m;
    scanf("%d", &m);

    // 法1：穷举
    int key;
    for (key = 0; key <= m; key++)
    {
        int manga = m - key;
        if (key * 2 + manga * 4 == 160)
        {
            printf("%d本漫画书,%d块钥匙扣\n", manga, key);
            return 0;
        }
    }
    printf("没有解决方案\n");
    return 0;
}