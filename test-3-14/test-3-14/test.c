#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	float num1, num2, num3;

	printf("请输入两个数字：");

	scanf("%f%f", &num1,&num2);

	if (num1 > num2)num3 = num1;

	else num3 = num2;

	if (num1 == num2)printf("两数相等且值均为%f", num3);

	else printf("两个数比较大的数为%f", num3);

	return 0;

}