#include <stdio.h>

int main()
{
    int letter = 0, number = 0, other = 0;
    for (;;)
    {
        char c;
        scanf("%c", &c);
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            letter++;
        else if (c >= '0' && c <= '9')
            number++;
        else if (c == '\n')
            break;
        else
            other++;
    }
    printf("字母数=%d,数字数=%d,其他字符数=%d\n", letter, number, other);

    return 0;
}