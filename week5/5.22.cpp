#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);
    if (x < -10)
    {
        printf("%0.2f\n", 5 * x * x);
    }
    else if (x >= -10 && x <= 20)
    {
        printf("%0.2f\n", x * x + 1);
    }
    else
    {
        printf("%0.2f\n", 3 * x + 8);
    }

    return 0;
}