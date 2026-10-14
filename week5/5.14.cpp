#include <stdio.h>

int main()
{
    // 法1:正常数字处理
    int num, counter;
    scanf("%d", &num);
    for (counter = 0; num != 0; counter++)
    {
        num /= 10;
    }

    // 法2:当字符串处理
    // int counter;
    // for (counter = 0;; counter++)
    // {
    //     char c;
    //     scanf("%c", &c);
    //     if (c == '\n')
    //         break;
    // }

    printf("%d位数\n", counter);
    return 0;
}