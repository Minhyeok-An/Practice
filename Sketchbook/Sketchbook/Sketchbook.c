#include <stdio.h>
#include <string.h>

int main()
{
	int s[10];
	int i, k, tmp;

	int* p;
	p = s;

	for (i = 0;i < 10;i++)
	{
		printf("s[%d] ������: ", i);
		scanf("%d", &*(p+i));
	}
	
	printf("���� �� �迭s ==>");

	for (i = 0; i < 10; i++)
		printf(" %d", *(p + i));

	printf("\n");

	for (i = 0; i < 9; i++)
	{
		for (k = i + 1; k < 10; k++)
		{
			if (*(p + k) < *(p + i))
			{
				tmp = *(p + k);
				*(p + k) = *(p + i);
				*(p + i) = tmp;
			}
		}
	}
	printf("���� �� �迭s ==>");
		
	for(i=0;i<10;i++)
		printf(" %d", *(p+i));
}