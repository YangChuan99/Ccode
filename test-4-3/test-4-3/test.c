#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//输出范围为0-n的水仙花数
void number1(int n)
{
	int a = n % 10;
	int b = n /10 % 10;
	int c = n /10 /10 % 10;
	int d = n / 10 / 10 /10 % 10;
	int e = n / 10 / 10 / 10 / 10 % 10;
	int f = n / 10 / 10 / 10 / 10 /10 % 10;
	if (n == a*a*a+b*b*b+c*c*c+d*d*d+e*e*e+f*f*f)
		printf("%d\n", n);
}

void number(int n)
{
	for (int i = 0; i < n; i++)
	{
		number1(i);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	number(n);
	return 0;
}