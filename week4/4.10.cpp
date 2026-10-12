#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        int x;
        scanf("%d", &x);
        if (x < 0)
            printf("%d,", x);
    }
    printf("\n");
    return 0;
}