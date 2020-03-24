#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//编写代码在一个整形有序数组中查找具体的某个数
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 0;
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	scanf("%d", &key);
	int left = 0;
	int right = sz;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了,下标是:%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("没找到");
	}
	return 0;
}