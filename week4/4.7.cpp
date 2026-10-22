#include <stdio.h>

int main()
{
    int max, b, c;
    scanf("%d %d %d", &max, &b, &c);
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    printf("max=%d\n", max);
    return 0;
}