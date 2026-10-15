#include <stdio.h>

int is_perfect_number(int number)
{
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    if (sum == number)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        if (is_perfect_number(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}