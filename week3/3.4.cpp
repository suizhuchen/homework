#include <stdio.h>

int main()
{
    int i, n;
    int result = 0;
    scanf("%d", &n);
    for (i = 1; i < n + 1; i++)
    {
        result += i * i;
    }
    printf("sum=%d\n", result);
    return 0;
}