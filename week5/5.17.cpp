#include <stdio.h>

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
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= 100; i++)
    {
        if (is_prime_number(i))
            n--;

        if (n == 0)
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}