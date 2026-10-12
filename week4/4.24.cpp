#include <stdio.h>

int main()
{
    int k, count = 0;
    scanf("%d", &k);
    for (int male = 0; male <= k; male++)
    {
        for (int female = 0; female <= k - male; female++)
        {
            for (int child = 0; child <= k - male - female; child++)
            {
                if (3 * male + 2 * female + 1 * child == 50 && male + female + child == k)
                {
                    printf("%d,%d,%d\n", male, female, child);
                    count++;
                }
            }
        }
    }
    printf("共%d种可能\n", count);

    return 0;
}