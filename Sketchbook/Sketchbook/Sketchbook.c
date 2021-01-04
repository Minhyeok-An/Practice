#include <stdio.h>

int main()
{
	int a, b, max, i;

	scanf("%d %d", &a, &b);

	max = a < b ? b : a;
	i = a < b ? a : b;

	while (i != 0)
	{
		i = max % i;
		
	}
	printf("%d", max);
}