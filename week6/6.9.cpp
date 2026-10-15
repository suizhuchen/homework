#include <stdio.h>
int main()
{
    int i, a[8];
    for (i = 0; i < 8; i++)
        scanf("%d", &a[i]);
    // 从此开始
    for (i = 0; i < 8; i++)
    {
        if (a[i] == 13)
        {
            printf("找到\n");
            return 0;
        }
    }
    printf("没找到\n");
    return 0;
}