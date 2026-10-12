#include <stdio.h>

int main()
{
    float sum = 0;
    int counter = 0;
    while (1)
    {
        int score;
        scanf("%d", &score);
        if (score < 0 || score > 100)
            break;
        sum += score;
        counter++;
    }
    printf("平均成绩=%0.1f\n", sum / counter);

    return 0;
}
