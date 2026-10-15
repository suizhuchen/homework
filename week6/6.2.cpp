#include <stdio.h>

int main()
{
    int sum = 0;
    int nums[10];
    for (int i = 0; i < 10; i++)
    {
        int x;
        scanf("%d", &x);
        nums[i] = x;
        sum += x;
    }
    float average = sum / 10.0;
    printf("均值=%0.1f\n", average);
    for (int i = 0; i < 10; i++)
    {
        if (nums[i] > average)
        {
            printf("%d,", nums[i]);
        }
    }
    printf("\n");
    return 0;
}