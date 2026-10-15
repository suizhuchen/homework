#include <stdio.h>

int main()
{
    const int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month;
    scanf("%d %d", &year, &month);
    if (month == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
    {
        printf("%d天\n", months[month - 1] + 1);
    }
    else
    {
        printf("%d天\n", months[month - 1]);
    }
    return 0;
}