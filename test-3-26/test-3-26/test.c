#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Print(unsigned int n)

{
	if (n > 9)
	{
		Print(n/10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);//123
	Print(num);
	return 0;
}

