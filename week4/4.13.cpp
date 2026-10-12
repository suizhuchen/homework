#include <stdio.h>

int main()
{
    int year, month, day;
    scanf("%d%d%d", &year, &month, &day);

    // 循环累加
    int i;
    int sum = 0;
    for (i = 0; i < month; i++)
    {
        switch (i)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            sum += 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            sum += 30;
            break;
        case 2:
            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
                sum += 29;
            else
                sum += 28;
            ;
        }
    }
    sum += day;
    printf("第%d天\n", sum);

    return 0;
}