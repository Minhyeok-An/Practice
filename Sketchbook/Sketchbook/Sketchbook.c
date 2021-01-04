#include <stdio.h>

char change(char);

int main()
{
	char input[100];
	int i;

	printf("문자열을 입력<100자 이내> : ");
	scanf("%s", input);

	for (i = 0; input[i]; i++)
	{
		printf("%c", change(input[i]));
	}
}

char change(char in)
{
	if (in >= 'a' && in <= 'z')
	{
		in = in - ('a' - 'A');
	}
	else if (in >= 'A' && in <= 'Z')
	{
		in = in + ('a' - 'A');
	}
}