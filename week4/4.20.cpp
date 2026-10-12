#include <stdio.h>

int main()
{
    int count = 0;
    for (int i = 100; i <= 200; i++)
    {
        int ok = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                ok = 0;
                break;
            }
        }
        if (ok == 1)
            count++;
    }
    printf("%d个\n", count);
    return 0;
}