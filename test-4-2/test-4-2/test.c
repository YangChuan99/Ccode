#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void reverse(char* arr,int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "welcome to YL";
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	reverse(arr, sz);
		printf("%s\n", arr);
	return 0;
}