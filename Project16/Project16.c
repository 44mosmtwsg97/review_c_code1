#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//求以下三数的和, 保留2位小数 1~a之和 1~b的平方和 1~c的倒数和
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