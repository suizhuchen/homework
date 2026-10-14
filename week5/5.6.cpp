#include <stdio.h>

int main()
{
    int x, reverse = 0;
    scanf("%d", &x);

    while (x != 0)
    {
        reverse = reverse * 10 + x % 10;
        x /= 10;
    }

    printf("%d\n", reverse);

    return 0;
}