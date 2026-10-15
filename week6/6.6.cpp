#include <stdio.h>
int main()
{
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    // 从此开始
    int sum = 0;
    for (int i = 0; i < m - 1; i++)
    {
        if (i == 1 && (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)))
        {
            sum += a[i] + 1;
        }
        else
        {
            sum += a[i];
        }
    }
    sum += d;
    printf("第%d天\n", sum);
    return 0;
}
