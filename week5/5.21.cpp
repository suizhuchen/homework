#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);
    if (x >= 0)
        printf("%0.2f\n", 3 * x * x + 10);
    else
        printf("%0.2f\n", 2 * x + 7);

    return 0;
}