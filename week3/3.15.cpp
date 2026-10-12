#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        int m;
        scanf("%d", &m);
        if (m % 2 == 0)
        {
            printf("%d,", m);
        }
    }
    printf("\n");
    return 0;
}