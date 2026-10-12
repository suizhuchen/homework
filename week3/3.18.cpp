#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        if (a == b || a == c || b == c)
        {
            printf("等腰三角形\n");
        }
        else
        {
            printf("一般三角形\n");
        }
    }
    else
    {
        printf("非三角形\n");
    }
    return 0;
}