#include <stdio.h>

int main()
{
    int a[] = {61, 4, 26, 8, 22, 35, 7, 89, 45, 1};
    int n, k = -1;
    // 定义初始下标且初始下标不存在（-1取不到）
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            k = i;
            break;
        }
    }
    if (k == -1)
    {
        printf("不能删除\n");
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            if (i != k)
            {
                printf("%d,", a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}