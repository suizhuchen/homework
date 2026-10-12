#include <stdio.h>

int main()
{
    int m, n;
    int result = 0;
    scanf("%d%d", &m, &n);
    for (; m < n; m++)
    {
        result += m % 3 == 0 ? 0 : m;
    }
    printf("%d\n", result);
    return 0;
}