#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//求方程的根，用三个函数分别求当b^2-4ac大于0、等于0、
//和小于0时的根，并输出结果。从主函数输入a、b、c的值。
int main()
{
	double a, b, c, temp, x1, x2;
	scanf("%lf %lf %lf", &a, &b, &c);
	temp = b * b - 4 * a * c;
	if (temp > 0)
	{
		temp = sqrt(temp);
		x1 = (-b + temp) / 2 / a;
		x2 = (-b - temp) / 2 / a;
		printf("x1=%lf,x2=%lf", x1, x2);
	}
	else if (0 == temp)
	{
		x1 = -b / 2 / a;
		printf("x1=x2=%lf", x1);
	}
	else
	{
		temp = sqrt(abs(temp));
		b = b / 2 / a;
		temp = temp / 2 / a;
		printf("x1=%.3lf+%.3lfi,x2=%.3lf-%.3lfi", b, temp, b, temp);
	}
}