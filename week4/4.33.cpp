#include <stdio.h>
// 曹越喜欢ccb

int main()
{
    for (char i = 'A'; i <= 'C'; i++)
    {
        for (char j = 'X'; j <= 'Z'; j++)
        {
            if (i == 'A' && j == 'X')
                continue;
            if (i == 'C' && (j == 'X' || j == 'Z'))
                continue;
            printf("%c----%c\n", i, j);
        }
    }

    return 0;
}