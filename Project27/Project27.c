#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����10�����֣�Ȼ�����������
int main()
{
	int arr[10],i=10;
	while (i--)
		scanf("%d", &arr[i]);
	for (int j = 0; j < 10; j++)
		printf("%d ", arr[j]);
	return 0;
}