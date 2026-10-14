#include <stdio.h>

int main()
{
    // 要求穷举
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 == 1)
            n--;

        if (n == 0)
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}