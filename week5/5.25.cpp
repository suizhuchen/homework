#include <stdio.h>

int main()
{
    int up, down, height;
    scanf("%d,%d,%d", &up, &down, &height);
    printf("%0.2f\n", (up + down) * height / 2.0);
    return 0;
}