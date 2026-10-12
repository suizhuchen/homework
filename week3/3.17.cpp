#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, disc;
    scanf("%lf,%lf,%lf", &a, &b, &c);
    disc = b * b - 4 * a * c;
    if (disc < 0 && !(fabs(disc) < 1e-6))
    {
        printf("无实根\n");
    }
    else
    {
        // disc可能为极小负数，此时直接置0
        if (fabs(disc) < 1e-6)
            disc = 0;
        double sqrt_disc = sqrt(disc);
        double x1 = ((0 - b) + sqrt_disc) / (2 * a);
        if (disc == 0)
        {
            // 相等根
            printf("%0.4lf\n", x1);
            printf("%0.4lf\n", x1);
        }
        else
        {
            // 不等根
            double x2 = ((0 - b) - sqrt_disc) / (2 * a);
            printf("%0.4lf\n", x1);
            printf("%0.4lf\n", x2);
        }
    }
    return 0;
}