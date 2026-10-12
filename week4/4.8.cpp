#include <stdio.h>

int main()
{
    int i;
    int max = 0;
    for (i = 0; i < 10; i++)
    {
        int x;
        scanf("%d", &x);
        max = max > x ? max : x;
    }
    printf("max=%d\n", max);
    return 0;
}