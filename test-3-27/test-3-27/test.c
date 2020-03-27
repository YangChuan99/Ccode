#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int DigitSum(int a)
{
	int ret = 0;
	while (a)
	{
		ret = ret + a % 10;
		a = a / 10;
	}
	return ret;
}

int main()
{
	int a = 0;
	printf("请输入一个非负整数: ");
	scanf("%d", &a);
	printf("%d\n", DigitSum(a));
	return 0;
}