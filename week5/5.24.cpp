#include <stdio.h>

int main()
{
    int n;
    float sum;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / (2 * i);
    }
    printf("%0.2f\n", sum);

    return 0;
}