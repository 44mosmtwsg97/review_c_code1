#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��ѡ�񷨶�10��������С��������
int main()
{
	int arr[10];
	
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(int j=0;j<10;j++)
		for (int k = j + 1; k < 10; k++)
		{
			int temp;
			if (arr[j] > arr[k])
			{
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
		}
	for (int i = 0; i < 10; i++)
	{
		printf("%5d", arr[i]);
	}
	return 0;
}