#include <stdio.h>

int main()
{
    int score;
    scanf("%d", &score);
    if (score < 60)
        printf("不通过\n");
    else if (score >= 60 && score <= 79)
        printf("通过\n");
    else if (score >= 80 && score <= 89)
        printf("良好\n");
    else
        printf("优秀\n");

    return 0;
}