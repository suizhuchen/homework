#include <stdio.h>

int main()
{
	int i;
	float sum = 0;
	for (i = 0; i < 10; i++)
	{
		int x;
		scanf("%d", &x);
		sum += x;
	}
	printf("%0.1f\n", sum / 10);
	return 0;
}