#define _CRT_SECURE_NO_WARNINGS 1
#include <assert.h>
#include<stdio.h>
//模拟实现库函数strlen
int my_strlen(char* arr)
{
	assert(arr != NULL);//断言
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	char arr[] = { "abcdefg" };
	printf("%d\n", my_strlen(arr));
	return 0;
}
