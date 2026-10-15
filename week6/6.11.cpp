#include <stdio.h>
int main()
{
    int a[10] = {1, 3, 5, 9, 11, 13, 15, 19, 23, 25}; // 数组初始化
    // 从此开始
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (a[i] == n)
            break;
    }
    if (i < 10)
    {
        printf("%d\n", i + 1);
    }
    else
    {
        printf("无此数\n");
    }
    return 0;
}
