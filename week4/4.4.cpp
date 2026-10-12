#include <stdio.h>

int main()
{
    int pm;
    scanf("%d", &pm);
    if (pm < 100)
        printf("较好\n");
    else if (pm >= 100 && pm <= 150)
        printf("轻度\n");
    else if (pm > 150 && pm <= 200)
        printf("中度\n");
    else
        printf("重度\n");

    return 0;
}