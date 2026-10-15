#include <stdio.h>
int main()
{
    int n, a[30] = {1, 1}, i;
    scanf("%d", &n);
    // 从此开始
    if (n > 2)
    {
        for (i = 2; i < n; i++)
        {
            a[i] = a[i - 1] + a[i - 2];
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d,", a[i]);
        if (i % 4 == 3 || i == n - 1)
        {
            printf("\n");
        }
    }
    return 0;
}