#include <stdio.h>

int main()
{
	char a;
	int b, plus;

	scanf("%c %d", &a, &b);

	if (a >= 'A' && a <= 'Z')
	{
		plus = b % ('Z' - 'A' + 1);
		a = a + plus;
		if (a >= 'A' && a <= 'Z')
		{
			printf("%c", a);
		}
		else
		{
			printf("%c", a - ('Z' - 'A' + 1));
		}
	}
	else if (a >= 'a' && a <= 'z')
	{
		plus = b % ('z' - 'a' + 1);
		a = a + plus;
		if (a >= 'a' && a <= 'z')
		{
			printf("%c", a);
		}
		else
		{
			printf("%c", a - ('z' - 'a' + 1));
		}
	}
	else
	{
		printf("%c", a);
	}

}
