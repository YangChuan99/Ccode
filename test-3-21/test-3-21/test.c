#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i, max;
	int arr[10];
	printf("请输入10个整数：\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("最大值= %d\n", max);
	return 0;
}