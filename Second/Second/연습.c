#include <stdio.h>

int main()
{
	int a, b, c, d;
	int result;

	printf("ù��° ��==> ");
	scanf_s("%d", &a);
	printf("�ι�° ��==> ");
	scanf_s("%d", &b);
	printf("����° ��==> ");
	scanf_s("%d", &c);
	printf("����° ��==> ");
	scanf_s("%d", &c);
	printf("�׹�° ��==> ");
	scanf_s("%d", &d);

	result = a + b + c + d;

	printf("%d + %d + %d + %d = %d \n", a, b, c, d, result);
}