#include <stdio.h>
#include <string.h>

int main()
{
	int s[10] = { 2,3,5,7,8,9,0,1,4,6 };
	int i, k, tmp;

	int* p;
	p = s;

	for (i = 0;i < 9;i++)
	{
		for (k = i;k < 9;k++)
		{
			if (*(p + i) > *(p + k))
			{
				tmp = *(p + i);
				*(p + i) = *(p + k);
				*(p + k) = tmp;
			}
		}
	}
	
	for (i = 0;i < 10;i++)
	{
		printf("%d", *(p + 1));
	}
}