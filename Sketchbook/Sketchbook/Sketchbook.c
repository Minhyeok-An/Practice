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
		printf("<1> �ڵ��� �ֱ� <2> �ڵ��� ���� <3> �� :");
		scanf("%d", &select);

		switch (select)
		{
		case 1:
			if (top >= 10)
			{
				printf("�ͳ��� �� ���� ���� �� ��\n");
			}
			else
			{
				stack[top] = carName++;
				printf("%c �ڵ����� �ͳο� ��\n", stack[top]);
				top++;
			}
			break;

		case 2:
			if (top <= 0)
			{
				printf("�ͳο� ���� ����\n");
			}
			else
			{
				top--;
				printf("%c �ڵ����� �ͳ��� ��������\n", stack[top]);
				stack[top] = ' ';
			}
			break;

		case 3:
			stack[top] = '\0';
			printf("���� �ͳο� %d�밡 ����.\n���α׷��� �����մϴ�.", top);
			printf("%s", stack);
			break;

		default:
			printf("�߸� �Է��߽��ϴ�.\n");
		}
	}
}