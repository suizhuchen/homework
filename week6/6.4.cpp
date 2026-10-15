#include <stdio.h>
int main()
{
    int a[100], i, max, n; // max记录最大数的下标
    scanf("%d", &n);
    for (i = 0; i < n; i++) /*输入n个数并保存到数组a*/
        scanf("%d", &a[i]);
    // 从此开始
    int location = 1;
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            location = i + 1;
        }
    }
    printf("max=%d,位于第%d个\n", max, location);
}