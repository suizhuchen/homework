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

    printf("%d\n", a[n - 1]);

    return 0;
}