#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);
    if (x < -0)
    {
        printf("%0.2f\n", x * x + 2);
    }
    else if (x >= 0 && x < 10)
    {
        printf("%0.2f\n", 3 * x * x + 1);
    }
    else
    {
        printf("%0.2f\n", 3 * x + 8);
    }

    return 0;
}