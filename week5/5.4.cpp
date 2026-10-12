#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int last = 0, current = 0;
    for (int i = 1; i <= n; i++)
    {
        int next = last + current;
        if (next == 0)
            next = 1;
        last = current;
        current = next;
        printf("%d,", current);
        if (i % 4 == 0 || i == n)

            printf("\n");
    }

    return 0;
}