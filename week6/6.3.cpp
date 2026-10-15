#include <stdio.h>

// 最sb之题
// 你不能提交全部代码，因为傻福系统会拼接代码的
int main()
{
    int a[100], i, max, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // 从此开始提交
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    printf("max=%d\n", max);
    return 0;
}