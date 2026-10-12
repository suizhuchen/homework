#include <stdio.h>

int main()
{
    int i = 0;
    int f = 1;
    double result = 0.0;
    double min_offset;
    scanf("%lf", &min_offset);
    while (1)
    {
        double current = 1.0 / (1 + i * 2);
        if (current < min_offset)
            break;
        result += f * current;
        f = -f;
        i++;
    }
    printf("%0.5f\n", result * 4);
    return 0;
}