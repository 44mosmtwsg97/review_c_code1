#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//有一个函数
//y = { x      x < 1
//	  { 2x - 1   1 <= x < 10
//	  { 3x - 11  x >= 10
//写一段程序，输入x，输出y
int hs(int x)
{
	if (x < 1) return x;
	else if (1 <= x && x< 10) return 2 * x - 1;
	else if (x > 10) return (3 * x) - 11;
}
int main()
{
	int x;
	scanf("%d", &x);
	printf("y=%d", hs(x));
	return 0;
}