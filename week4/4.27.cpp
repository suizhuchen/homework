#include <stdio.h>

int main()
{
    int num = 0;
    while (1)
    {
        if (num % 2 == 1)
            if (num % 3 == 2)
                if (num % 5 == 4)
                    if (num % 6 == 5)
                    {
                        printf("%d\n", num);
                        return 0;
                    }
        num += 7;
    }
    return 0;
}