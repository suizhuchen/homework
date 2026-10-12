#include <stdio.h>

int main()
{
    int found = 0;
    for (int i = 0; i < 8; i++)
    {
        int x;
        scanf("%d", &x);
        if (x == 13)
        {
            found = 1;
            break;
        }
    }
    printf("%s\n", found ? "找到" : "没找到");
    return 0;
}