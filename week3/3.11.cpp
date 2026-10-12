#include <stdio.h>

int main()
{
    int i = 0;
    int f = 1;
    float result = 0.0;
    // true在moodle上未定义！！！！！
    while (1)
    {
        float current = 1.0 / (1 + i * 3);
        result += f * current;
        f = -f;
        i++;
        if (current < 1e-5)
            break;
    }
    printf("%0.5f\n", result);
    return 0;
}