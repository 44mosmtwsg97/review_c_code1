#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��Sn = 1!+ 2!+ 3!+ 4!+ 5!+ �� + n!ֵ֮������n��һ������(n������20)��
int ch(int i)
{
	if (i == 1) return 1;
	return ch(i - 1) * i;
}
int main()
{
	int n, temp=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		temp += ch(i);
	}
	printf("%d", temp);
	return 0;
}