#include <stdio.h>

int main()
{
    // 187110
    // 10692
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i * 6237 + 176418 == j * 35640)
            {
                printf("%d,%d\n", i, j);
                return 0;
            }
        }
    }

    return 0;
}