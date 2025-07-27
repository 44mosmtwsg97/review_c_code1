#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。
//请编程实现在第n年的时候，共有多少头母牛？
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