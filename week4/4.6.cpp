#include <stdio.h>

int main()
{
    int m, i;
    scanf("%d", &m);
    int sum = 0;
    for (i = 50; i < 101; i++)
    {
        sum += i % m == 0 ? i : 0;
    }
    printf("%d\n", sum);
    return 0;
}