#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);

    int number = a;
    for (; number <= 100; number += 3)
    {
        if (number <= 10)
            continue;
        if (number % 5 == b && number % 7 == c)
            break;
    }
    if (number > 100)
        printf("无解\n");
    else
        printf("%d\n", number);

    return 0;
}