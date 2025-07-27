#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//有三个整数a b c, 由键盘输入，输出其中的最大的数。
//一行数组，分别为a b c
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);  
	//printf("%d", a > b ? a > c ? a : c : b > c ? b : c);
	printf("%d", c > b ? a > c ? a : c : a > b ? a : b);
	return 0;
}