#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[] = {1, 3, 5, 9, 11, 13, 15, 19, 23, 25};
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            printf("%d\n", i + 1);
            return 0;
        }
    }
    printf("没找到\n");
    return 0;
}