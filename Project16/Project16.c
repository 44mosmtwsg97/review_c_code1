#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//�����������ĺ�, ����2λС�� 1~a֮�� 1~b��ƽ���� 1~c�ĵ�����
int main()
{
	double  a, b, c,sum=0;
	scanf("%lf %lf %lf", &a,& b,& c);
	for (double i = 1; i <= a; i++) sum += i;
	for (double i = 1; i <= b; i++) sum += pow(i,2);
	for (double i = 1; i <= c; i++) sum += 1/i;
	printf("%.2f", sum);
	return 0;
}