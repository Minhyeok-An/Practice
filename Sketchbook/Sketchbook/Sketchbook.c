#include <stdio.h>

int main()
{
	int a, b;
	
	for (; ; )
	{
		printf("더할 두 수를 입력 (멈추려면 Ctrl+C) : ");
		scanf("%d %d", &a, &b);

		printf("%d + %d = %d \n", a, b, a + b);
	}
}