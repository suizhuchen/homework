#include <stdio.h>

int main()
{
    int m, n, count = 0;
    scanf("%d %d", &m, &n);
    // m每次增加1，直到等于n以前停止循环
    for (; m < n; m++)
    {
        // 每次判断m是否不被3整除
        if (m % 3 != 0)
        {
            printf("%d,", m);
            // 计数器先+1，以判断次数
            count++;
            // 0-1-2-3，变化3次，就换行
            if (count % 3 == 0)
                printf("\n");
        }
    }
    // 判断是否已经换过行
    if (count % 3 != 0)
        printf("\n");
    return 0;
}