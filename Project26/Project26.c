#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//已有一个已正序排好的9个元素的数组，
//今输入一个数要求按原来排序的规律将它插入数组中。
int main()
{
	int arr[10], num, temp;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &num);
	for (int i = 0; i < 9; i++)
	{
		if (arr[i] >= num)
		{
			temp = i;
			break;
		}
	}
	for (int j = 9; j > temp; j--)
		arr[j] = arr[j - 1];
	arr[temp] = num;
	for (int i = 0; i <= 9; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}