#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//有一分数序列： 2 / 1 3 / 2 5 / 3 8 / 5 13 / 8 21 / 13......
//求出这个数列的前N项之和，保留两位小数。
double ch1(int N)
{
	if (1 == N) return 2;
	else if (2 == N) return 3;
	else return ch1(N - 1) + ch1(N - 2);
}
double ch2(int N)
{
	if (1 == N) return 1;
	else if (2 == N) return 2;
	else return ch2(N - 1) + ch2(N - 2);
}
int main()
{
	int N; 
	double temp = 0;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		temp += ch1(i) / ch2(i);
	}
	printf("%.2lf", temp);
	return 0;
}