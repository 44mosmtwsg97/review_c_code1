#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//�õ�������ƽ����
//��ʽ����a��ƽ�����ĵ�����ʽΪ��X[n + 1] = (X[n] + a / X[n]) / 2 
//Ҫ��ǰ����������Ĳ�ľ���ֵ����0.00001�� �������3λС��
double ch(double a)
{
	double diff, x = a;
	do {
		double m = (x + a / x) / 2;
		diff = fabs(m - x);
		x = m;
	} while (diff >= 0.00001); return x;
}
int main()
{
	double a;
	scanf("%lf", &a);
	printf("%.3lf", ch(a));
	return 0;
}