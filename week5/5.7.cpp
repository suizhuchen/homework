#include <stdio.h>

int main()
{
    int money, count = 0;
    scanf("%d", &money);
    money *= 10; // 角

    for (int i = 0; i <= 40; i++)
    {
        for (int j = 0; j <= 40 - i; j++)
        {
            int k = 40 - i - j;
            if (10 * i + 5 * j + k == money && i + j + k == 40)
            {
                count++;
            }
        }
    }

    printf("%d种\n", count);

    return 0;
}