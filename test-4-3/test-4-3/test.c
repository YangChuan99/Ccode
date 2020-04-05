#include<stdio.h>
//输出范围为0-n的水仙花数
void number1(int n)
{
	int i, j, s = 0, k, l, s1 = 0, s2;
	j = n;
	for (i = 0; j >= 1; i++)

	{
		j = j / 10;
	}
	j = n;
	for (k = 0; k < i; k++)
	{
		s1 = j % 10;
		s2 = s1;
		for (l = 1; l < i; l++)
		{
			s2 = s1 * s2;
		}
		s = s2 + s;
		j = j / 10;
	}
	if (n == s)printf("%d\n", n);
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