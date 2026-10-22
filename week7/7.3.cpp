#include <stdio.h>

int main()
{
    // 定义一个最后为空的数组
    int a[10] = {1, 2, 3, 6, 8, 9, 12, 23, 33, 0};
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < 9; i++)
    {
        if (a[i] == n)
        {
            printf("不能插入\n");
            return 0;
        }
        if (n < a[i])
        {
            // 从末尾开始移动
            for (int j = 9; j > i; j--)
            {
                a[j] = a[j - 1];
            }
            a[i] = n;
            break;
        }
    }
    // i==9
    if (i == 9)
        a[i] = n;
    for (int i = 0; i < 10; i++)
    {
        printf("%d,", a[i]);
    }
    printf("\n");
    return 0;
}

// 题目给的思路为先查找一遍，判断有无后再循环一遍
// 时间复杂度为2n