#include <stdio.h>

int main()
{
	int i, k;

	for (k = 2;k <= 9;k++)
	{
		printf("---- %d´Ü ----\t", k);
	}
	printf("\n");

	for (i = 1; i <= 9; i++)
	{
		for (k = 2; k <= 9; k++)
		{
			printf("%02d X %02d = %2d\t", k, i, k * i);
		}
		printf("\n");
	}
}