#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����һ�������¶ȣ�Ҫ����������¶ȡ���ʽΪ c = 5(F - 32) / 9��ȡλ2С��
int main()
{
	double F,c;
	scanf("%lf", &F);
	c = 5 * (F - 32) / 9;
	printf("c=%.2lf", c);
	return 0;
}
	

