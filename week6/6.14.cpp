#include <stdio.h>

int is_leap_year(int year)
{
    return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) ? 1 : 0;
}

int main()
{
    int m, n;
    int count = 0;
    scanf("%d%d", &m, &n);

    // 懒得动态了
    int a[100];

    // 先计算第一个闰年
    // i<8为处理1897+3后1900仍不闰年的情况，加到1904必闰年
    for (int i = 0; i < 8; i++)
    {
        if (is_leap_year(m + i))
        {
            a[count] = m + i;
            count++;
            // 提前给下一个年赋值，方便后续循环
            a[count] = m + i;
            break;
        }
    }

    while (count != n)
    {
        a[count] += 4;
        if (is_leap_year(a[count]))
            count++;
        a[count] = a[count - 1];
    }
    // 到此结束
    printf("%d,%d\n", a[0], a[n - 1]); // 输出第一个闰年、第n个闰年
    return 0;
}