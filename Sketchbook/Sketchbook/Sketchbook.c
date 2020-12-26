#include <stdio.h>
#include <string.h>

int main()
{
	char stack[11];
	int top = 0;

	char carName = 'A';
	int select = 0;

	while (select != 3)
	{
		printf("<1> 자동차 넣기 <2> 자동차 빼기 <3> 끝 :");
		scanf("%d", &select);

		switch (select)
		{
		case 1:
			if (top >= 10)
			{
				printf("터널이 꽉 차서 차가 못 들어감\n");
			}
			else
			{
				stack[top] = carName++;
				printf("%c 자동차가 터널에 들어감\n", stack[top]);
				top++;
			}
			break;

		case 2:
			if (top <= 0)
			{
				printf("터널에 차가 없음\n");
			}
			else
			{
				top--;
				printf("%c 자동차가 터널을 빠져나감\n", stack[top]);
				stack[top] = ' ';
			}
			break;

		case 3:
			stack[top] = '\0';
			printf("현재 터널에 %d대가 있음.\n프로그램을 종료합니다.", top);
			printf("%s", stack);
			break;

		default:
			printf("잘못 입력했습니다.\n");
		}
	}
}