#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, disc;
    scanf("%lf,%lf,%lf", &a, &b, &c);
    disc = b * b - 4 * a * c;
    if (disc == 0 || fabs(disc) < 1e-6)
        printf("相等根\n");
    else if (disc < 0)
        printf("无实根\n");
    else
        printf("不等根\n");
    return 0;
}