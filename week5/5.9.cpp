#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    char min, max;

    if (c - 'a' >= 0)
    {
        max = 'z'; // 小写字母
        min = 'a';
    }
    else
    {
        max = 'Z';
        min = 'A';
    }
    for (int i = 1; i <= max - c; i++)
    {
        printf("%c", c + i);
    }
    for (int i = 0; i <= c - min; i++)
    {
        printf("%c", min + i);
    }

    printf("\n");

    return 0;
}