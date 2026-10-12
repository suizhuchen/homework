#include <stdio.h>

int main()
{
    int i, n;
    int result = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        result += 1 + i * 3;
    }
    printf("%d\n", result);
    return 0;
}