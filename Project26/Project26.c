#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����һ���������źõ�9��Ԫ�ص����飬
//������һ����Ҫ��ԭ������Ĺ��ɽ������������С�
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