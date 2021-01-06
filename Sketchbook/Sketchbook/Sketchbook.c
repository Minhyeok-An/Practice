#include <stdio.h>
int main()
{
	int n, i, j;
	scanf("%d", &n);

	for (i = 1;i <= n;i++)
	{
		if (i % 2 == 1)
		{
			for (j = (i - 1) * n + 1;j <= i * n;j++)
			{
				printf(" %d", j);
			}
			printf("\n");
		}
		if (i % 2 == 0)
		{
			for (j = i * n;j >= (i - 1) * n + 1;j--)
			{
				printf(" %d", j);
			}
			printf("\n");
		}

	}
}