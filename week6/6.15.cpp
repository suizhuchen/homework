#include <stdio.h>

int main()
{
    int m, n;
    int count = 0;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        int cd = i % 100;
        int ab = (i - cd) / 100;
        if (ab * 3 == cd)
            count++;
    }
    printf("%d个\n", count);

    return 0;
}