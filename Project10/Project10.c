#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����һ��������5λ��������Ҫ�� ��
// 1��������Ǽ�λ�� 
// 2���ֱ����ÿһλ���� 
// 3�������������λ���֣�
// ����ԭ��Ϊ321,Ӧ���123
int main()
{
	int arr[10], num, i = 0;
	scanf("%d", &num);
	while (num > 0) arr[i++] = num % 10, num /= 10;
	printf("%d\n", i);
	for (int j = i-1; j >= 0; j--) printf("%d", arr[j]);
	printf("\n");
	for (int k =0 ; k <i; k++) printf("%d", arr[k]);
	return 0;
}