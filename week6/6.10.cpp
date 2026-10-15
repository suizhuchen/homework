#include <stdio.h>
int main()
{
    int i, a[8];
    for (i = 0; i < 8; i++)
        scanf("%d", &a[i]);
    // 从此开始
    int count = 0;
    for (i = 0; i < 8; i++)
    {
        if (a[i] == 13)
        {
            count++;
        }
    }
    if (count)
    {
        printf("%d次\n", count);
    }
    else
    {
        printf("没找到\n");
    }
    return 0;
}