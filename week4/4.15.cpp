#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);

    // 法1：我们先动脑
    // 2x+4y=n
    // x+y=m
    // 2y=n-2m
    // 2x=4m-n
    // 合法条件：
    // 1.脚数比全鸡多，比全兔少
    // 2.脚数-全鸡脚数为2倍数（对应兔数）

    if (n < 2 * m || n > 4 * m || (n - 2 * m) % 2 != 0)
    {
        printf("无此结果\n");
        return 0;
    }
    else
    {
        // 已合法
        int rabbit = (n - 2 * m) / 2;
        int chicken = (4 * m - n) / 2;
        printf("鸡=%d,兔=%d\n", chicken, rabbit);
    }
    return 0;

    // 法2：穷举

    // int chicken;
    // for (chicken = 0; chicken <= m; chicken++)
    // {
    //     int rabbit = m - chicken;
    //     if (chicken * 2 + rabbit * 4 == n)
    //     {
    //         printf("鸡=%d,兔=%d\n", chicken, rabbit);
    //         return 0;
    //     }
    // }
    // printf("无此结果\n");
    // return 0;
}