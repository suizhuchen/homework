#include <stdio.h>

int main()
{
    for (int i = 0; i < 15; i++)
    {
        char c;
        scanf("%c", &c);
        printf("%c\n", c - 32);
    }

    return 0;
}