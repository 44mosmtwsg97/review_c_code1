#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//编写一个程序，输入a、b、c三个值，输出其中最大值。
//一行数组，分别为a b c
//a b c其中最大的数
int main()
{
	int a, b, c,mid=0;
	printf("请输入三个数字");
	while (scanf("%d %d %d", &a, &b, &c))printf("%d", ((mid = a < b ? b : a) < c ? c : mid));
	return 0;
}