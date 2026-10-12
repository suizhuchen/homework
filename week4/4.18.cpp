#include <stdio.h>

int main()
{
    int options = 0;
    int i, j;

    // 100最多拆成5张20
    for (i = 5; i >= 0; i--)
    {
        // 根据剩余钱，拆分为不同个数10元
        for (j = (100 - i * 20) / 10; j >= 0; j--)
        {
            // 为满足100元，5元个数固定，1种10元对应1种5元方案
            options++;
        }
    }

    printf("%d种\n", options);

    return 0;
}