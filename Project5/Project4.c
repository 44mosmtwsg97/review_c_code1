#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��һͷĸţ����ÿ�������һͷСĸţ��ÿͷСĸţ�ӵ��ĸ���ͷ��ʼ��ÿ�����Ҳ��һͷСĸţ��
//����ʵ���ڵ�n���ʱ�򣬹��ж���ͷĸţ��
int cattle(int year)
{
	if (year == 1)return 1;
	if (year == 2)return 2;
	if (year == 3)return 3;
	else
		return cattle(year - 3) + cattle(year - 1);
}
int main()
{
	int year;
	while (scanf("%d", &year))
		printf("%d\n", cattle(year));
	return 0;
}