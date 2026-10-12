#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for (int red = 0; red <= 3; red++)
    {
        for (int white = 0; white <= 3; white++)
        {
            for (int black = 0; black <= 6; black++)
            {
                if (red + white + black == n)
                    count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}