#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int a[32] = { 0 };
	int b = 0;
	printf("ÇëÊäÈë:>\n");
	scanf("%d", &b);
	for (i = 0; i < 32; i++)
	{
		a[i] = b % 2;
		b /= 2;
	}
	printf("Å¼Êý \n");
	for (i =31; i >= 0; i -= 2)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("ÆæÊý \n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", a[i]);
	}
	return 0;
}