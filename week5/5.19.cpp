#include <stdio.h>

int main()
{
    int r_in, r_out;
    scanf("%d,%d", &r_in, &r_out);

    printf("%0.2f\n", (r_out * r_out - r_in * r_in) * 3.14);

    return 0;
}