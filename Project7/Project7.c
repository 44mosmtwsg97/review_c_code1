#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����������a b c, �ɼ������룬������е���������
//һ�����飬�ֱ�Ϊa b c
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);  
	//printf("%d", a > b ? a > c ? a : c : b > c ? b : c);
	printf("%d", c > b ? a > c ? a : c : a > b ? a : b);
	return 0;
}