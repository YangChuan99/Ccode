#define _CRT_SECURE_NO_WARNINGS 1
#include <assert.h>
#include<stdio.h>
//ģ��ʵ�ֿ⺯��strlen
int my_strlen(char* arr)
{
	assert(arr != NULL);//����
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
