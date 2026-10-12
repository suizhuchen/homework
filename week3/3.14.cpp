#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    for (; m < n; m++)
    {
        if (m % 3 != 0)
            printf("%d,", m);
    }
    printf("\n");
    return 0;
}