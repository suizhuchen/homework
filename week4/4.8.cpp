#include <stdio.h>

int main()
{
    int max, x;
    // 接受第一个数，并假定其为最大值
    scanf("%d", &max);
    // 因为已经接受一个数，故需循环9次
    for (int i = 1; i < 10; i++)
    {
        // 接受新数，并比较其是否最大
        scanf("%d", &x);
        // 非最大则替换
        if (x > max)
            max = x;
    }
    // 输出
    printf("max=%d\n", max);
    return 0;
}