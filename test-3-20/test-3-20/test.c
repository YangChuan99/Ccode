#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char input[20] = { 0 };
	int ch = 0;
	printf("����������");
	scanf("%s", &input);
	printf("��ȷ�����루Y/N��");
	while ((ch = getchar()) != '\n')
	{
		;
	}
	ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}