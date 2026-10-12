#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);
    if (x < 0)
        printf("%0.2f\n", x + 1);
    else if (x >= 0 && x < 1)
        printf("11.00\n");
    else
        printf("%0.2f\n", x * x * x);

    return 0;
}