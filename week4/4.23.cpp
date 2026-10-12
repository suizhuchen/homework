#include <stdio.h>

int main()
{
    for (int i = 0; i < 100; i++)
    {
        int current_num = i * 10 + 67008;
        if (current_num % 78 == 0 && current_num % 67 == 0)
        {
            printf("%d\n", current_num);
        }
    }

    return 0;
}