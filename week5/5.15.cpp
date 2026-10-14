#include <stdio.h>

int main()
{
    float bmi;
    scanf("%f", &bmi);
    if (bmi < 18)
        printf("偏轻\n");
    else if (bmi >= 18 && bmi < 23)
        printf("标准\n");
    else if (bmi >= 23 && bmi < 25)
        printf("过重\n");
    else
        printf("肥胖\n");

    return 0;
}