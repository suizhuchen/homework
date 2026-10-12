#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int last = 0, current = 0;
    for (int i = 0; i < n; i++)
    {
        int next = last + current;
        if (next == 0)
            next = 1;
        last = current;
        current = next;
    }
    printf("%d\n", current);

    return 0;
}