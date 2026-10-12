#include <stdio.h>

int main()
{
    int max, b, c;
    scanf("%d%d%d", &max, &b, &c);
    b = b >= c ? b : c;
    max = max >= b ? max : b;
    printf("max=%d\n", max);
    return 0;
}