#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��������������m��n���������Լ������С��������
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