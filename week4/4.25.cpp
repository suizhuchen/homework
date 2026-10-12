#include <stdio.h>

int main()
{
    int L, a, b;
    int best_a = 0, best_b = 0;
    scanf("%d%d%d", &L, &a, &b);
    int last_L = L;
    for (int curr_a = 0; curr_a < L / a; curr_a++)
    {
        int curr_b = (L - curr_a * a) / b;
        int curr_last_L = L - curr_a * a - curr_b * b;
        // printf("%d,%d,%d\n", curr_a, curr_b, curr_last_L);
        if (curr_last_L < last_L)
        {
            best_a = curr_a;
            best_b = curr_b;
            last_L = curr_last_L;
        }
    }
    printf("%d,%d,%d\n", best_a, best_b, last_L);

    return 0;
}