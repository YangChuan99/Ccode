#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��д������һ���������������в��Ҿ����ĳ����
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
			printf("�ҵ���,�±���:%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("û�ҵ�");
	}
	return 0;
}