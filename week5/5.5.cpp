#include <stdio.h>

int is_leap_year(int year)
{
    return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) ? 1 : 0;
}

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);

    int leap_year = 0;

    // 先计算第一个闰年
    // i<8为处理1897+3后1900仍不闰年的情况，加到1904必闰年
    for (int i = 0; i < 8; i++)
    {
        if (is_leap_year(m + i))
        {
            leap_year = m + i;
            n--;
            break;
        }
    }

    while (n != 0)
    {
        leap_year += 4;
        if (is_leap_year(leap_year))
            n--;
    }

    printf("%d\n", leap_year);

    return 0;
}
