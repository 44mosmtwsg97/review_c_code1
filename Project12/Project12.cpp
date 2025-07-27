#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//输入两个正整数m和n，求其最大公约数和最小公倍数。
int main()
{
	int m, n, mid,x,y;
	scanf("%d%d", &m, &n);
	x = m, y = n;
	while (n > 0) mid = m % n, m = n, n = mid;
	printf("%d\n", m);
	printf("%d", x * y / m);
	return 0;
}