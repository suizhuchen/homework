#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    switch (x)
    {
    case 1:
    case 2:
        printf("Lily\n");
        break;
    case 3:
    case 4:
    case 5:
        printf("Lavender\n");
        break;
    case 6:
    case 7:
    case 8:
    case 9:
        printf("Rose\n");
        break;
    case 10:
        printf("Violet\n");
        break;
    }
    return 0;
}