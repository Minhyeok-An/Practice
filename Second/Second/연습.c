#include <stdio.h>

int main()
{
	int a, b, c, d;
	int result;

	printf("첫번째 값==> ");
	scanf_s("%d", &a);
	printf("두번째 값==> ");
	scanf_s("%d", &b);
	printf("세번째 값==> ");
	scanf_s("%d", &c);
	printf("세번째 값==> ");
	scanf_s("%d", &c);
	printf("네번째 값==> ");
	scanf_s("%d", &d);

	result = a + b + c + d;

	printf("%d + %d + %d + %d = %d \n", a, b, c, d, result);
}