#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��дһ����������a��b��c����ֵ������������ֵ��
//һ�����飬�ֱ�Ϊa b c
//a b c����������
int main()
{
	int a, b, c,mid=0;
	printf("��������������");
	while (scanf("%d %d %d", &a, &b, &c))printf("%d", ((mid = a < b ? b : a) < c ? c : mid));
	return 0;
}