#include <stdio.h>

int main()
{
    float e, pi = 0;
    int flag = 1;
    scanf("%f", &e);

    for (int i = 0;; i++)
    {
        float s = 1.0 / (1 + 2 * i);
        if (s < e)
            break;
        pi += s * flag;
        flag = -flag;
    }

    printf("%0.5f\n", pi * 4);

    return 0;
}