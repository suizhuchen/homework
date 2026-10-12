#include <stdio.h>

int main()
{
    int i, n;
    int result = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        result += (i + 1) % 2 == 0 ? -(1 + i * 3) : 1 + i * 3;
    }
    printf("%d\n", result);
    return 0;
}