#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);
    if (x >= 20)
        printf("%0.2f\n", x * x + 5 * x + 10);
    else
        printf("%0.2f\n", x * x - 2 * x);

    return 0;
}