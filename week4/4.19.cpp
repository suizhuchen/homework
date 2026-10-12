#include <stdio.h>

int main()
{
    int m;
    scanf("%d", &m);
    int found = 0;
    // 法1：暴力穷举
    // for (int i = 0; i <= m; i++)
    // {
    //     for (int j = 0; j <= m - i; j++)
    //     {
    //         for (int k = 0; k <= m - i - j; k += 2)
    //         {
    //             if (i * 5 + j * 2 + k / 2 == 120 && i + j + k == m)
    //             {
    //                 printf("%d,%d,%d\n", i, j, k);
    //                 found = 1;
    //             }
    //         }
    //     }
    // }

    // 法2：方程
    // 5x+2y+0.5z=120
    // 10x+4y+z=240
    // x+y+z=m
    // 9x+3y=240-m
    // 3x+y=(240-m)/3
    // 令S=(240-m)/3
    // y=S-3x
    // 240-m必须为3的倍数
    // z=m-x-y=m-S+2x

    if ((240 - m) % 3 == 0)
    {
        int s = (240 - m) / 3;
        for (int x = 0; x <= m; x++)
        {
            int y = s - 3 * x;
            int z = m - x - y;
            if (y >= 0 && z >= 0)
            {
                printf("%d,%d,%d\n", x, y, z);
                found = 1;
            }
        }
    }

    if (found == 0)
    {
        printf("No Output\n");
    }

    return 0;
}