#include <stdio.h>

int main()
{
    const float pi = 3.1415926;
    float r, h;
    scanf("%f%f", &r, &h);
    printf("%0.2f\n", (1.0 / 3.0) * pi * r * r * h);
    return 0;
}