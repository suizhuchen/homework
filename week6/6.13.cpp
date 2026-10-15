#include <stdio.h>

// 建议：素数判断最好通过函数调用（下一章讲）。
// 已接受建议
int is_prime_number(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n = 0;
    int a[21];
    for (int i = 100; i < 201; i++)
    {
        if (is_prime_number(i))
        {
            a[n] = i;
            n++;
        }
    }
    // 到此结束
    printf("%d个\n%d,%d\n", n, a[9], a[19]);
    return 0;
}