#include <stdio.h>

int main()
{
	int a, b;
	
	for (; ; )
	{
		printf("���� �� ���� �Է� (���߷��� Ctrl+C) : ");
		scanf("%d %d", &a, &b);

		printf("%d + %d = %d \n", a, b, a + b);
	}
}