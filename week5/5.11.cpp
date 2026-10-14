#include <stdio.h>

int main()
{
    int a, n, base = 1, s = 0;
    scanf("%d", &a);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        s += a * base;
        base = 10 * base + 1;
    }
    printf("%d\n", s);

    return 0;
}