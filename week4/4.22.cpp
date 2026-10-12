#include <stdio.h>

int main()
{
    for (int i = 1000; i < 10000; i++)
    {
        int a = i / 1000;
        int b = (i % 1000) / 100;
        int c = (i % 100) / 10;
        int d = i % 10;
        if (i == a * a * a * a + b * b * b * b + c * c * c * c + d * d * d * d)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}