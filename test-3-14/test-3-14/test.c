#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	float num1, num2, num3;

	printf("�������������֣�");

	scanf("%f%f", &num1,&num2);

	if (num1 > num2)num3 = num1;

	else num3 = num2;

	if (num1 == num2)printf("���������ֵ��Ϊ%f", num3);

	else printf("�������Ƚϴ����Ϊ%f", num3);

	return 0;

}