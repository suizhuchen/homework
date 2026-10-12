#include <stdio.h>

int main()
{
    int i;
    int result = 0;
    for (i = 0; i < 10; i++)
    {
        int m;
        scanf("%d", &m);
        result += m % 2 == 0 ? m : 0;
    }
    printf("%d\n", result);
    return 0;
}