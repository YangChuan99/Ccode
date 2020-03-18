#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1;
	while (a <= 100)
	{
		//printf("%d\n", a);
		//a = a + 2;
		if (a % 2 == 1)
			printf("%d", a);
		a++;
	}
	return 0;
}