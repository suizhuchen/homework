#include <stdio.h>

int main()
{
    int m, n;
    int counter = 0;
    scanf("%d%d", &m, &n);
    for (; m < n; m++)
    {
        if (m % 3 != 0)
        {
            if (counter == 3)
            {
                printf("\n");
                counter = 0;
            }
            printf("%d,", m);
            counter++;
        }
    }
    printf("\n");
    return 0;
}