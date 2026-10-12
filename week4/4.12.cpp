#include <stdio.h>

int main()
{
    int year, month;
    scanf("%d%d", &year, &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31天\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30天\n");
        break;
    case 2:
        // 闰年
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
            printf("29天\n");
        else
            printf("28天\n");
        break;
    }
    return 0;
}