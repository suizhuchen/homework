#include <stdio.h>

int main()
{
    for (int male = 0; male <= 20; male++)
    {
        for (int female = 0; female <= 34; female++)
        {
            for (int child = 0; child <= 100 - female - male; child += 3)
            {
                if (male * 5 + female * 3 + child / 3 == 100 && male + female + child == 100)
                {
                    printf("%d,%d,%d\n", male, female, child);
                }
            }
        }
    }
    return 0;
}