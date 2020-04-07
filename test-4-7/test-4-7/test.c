#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void ajust(int arr[], int len)
{
	int left = 0;
	int right = len - 1;
	int tmp = 0;
	while (left < right)
	{
		while (arr[left] % 2 == 1)
		{
			left++;
		}
		while (arr[right] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	ajust(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

