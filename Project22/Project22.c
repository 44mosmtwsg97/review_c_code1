#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//用迭代法求平方根
//公式：求a的平方根的迭代公式为：X[n + 1] = (X[n] + a / X[n]) / 2 
//要求前后两次求出的差的绝对值少于0.00001。 输出保留3位小数
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