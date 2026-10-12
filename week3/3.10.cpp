#include <stdio.h>

int main()
{
    int i, n;
    float result = 0.0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        result += (i + 1) % 2 == 0 ? -(1.0 / (1 + i * 3)) : 1.0 / (1 + i * 3);
    }
    printf("%0.5f\n", result);
    return 0;
}