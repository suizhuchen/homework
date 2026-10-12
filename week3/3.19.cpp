#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int a = x / 100;       // 百位
    int b = (x / 10) % 10; // 十位
    int c = x % 10;        // 个位

    int sum = a * a * a + b * b * b + c * c * c;
    if (x == sum)
    {
        printf("是\n");
    }
    else
    {
        printf("不是\n");
    }
    return 0;
}
