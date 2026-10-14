#include <stdio.h>

int main()
{
    int n;
    float result = 0.0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        result += 1.0 / (1 + i * 3);
    }
    printf("%0.5f\n", result);
    return 0;
}