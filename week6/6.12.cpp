#include <stdio.h>
// #include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    // 按照题目要求，数组长度取10即可
    int nums[10];

    // extra:动态分配数组大小
    // int *nums = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int temp = nums[n - 1];
    nums[n - 1] = nums[0];
    nums[0] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d,", nums[i]);
    }
    printf("\n");

    // 回收内存
    // free(nums);

    return 0;
}