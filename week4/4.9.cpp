#include <stdio.h>

int main()
{
    int i;
    int counter = 0;
    for (i = 0; i < 10; i++)
    {
        int x;
        scanf("%d", &x);
        if (x >= 60)
            counter++;
    }
    printf("及格人数=%d\n", counter);
    return 0;
}