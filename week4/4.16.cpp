#include <stdio.h>

int main()
{
    int m;
    scanf("%d", &m);
    int i;
    for (i = 2; i <= m; i++)
    {
        if (m % i == 0 && i != m)
        {
            printf("不是素数\n");
            return 0;
        }
    }
    printf("素数\n");
    return 0;
}