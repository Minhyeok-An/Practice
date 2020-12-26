#include <stdio.h>
#include <string.h>

int main()
{
	int a[3] = { 10,20,30 };

	printf("%d\n%d\n%d\n%d", &a[0], &a[1], &a[2], a);
}