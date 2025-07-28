#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//求Sn = a + aa + aaa + … + aa…aaa（有n个a）之值，其中a是一个数字，为2。
//例如，n = 5时 = 2 + 22 + 222 + 2222 + 22222，n由键盘输入。

//法一：递归
//int ch(int n)
//{
//	if (n == 0) return 2;
//	else if (n > 0) return ch(n - 1) + 2 * pow(10, n);
//}
//int main()
//{
//	int i = 0, Sn = 0, n,mid=0;
//	scanf("%d", &n);
//	while (i < n) mid += ch(i),i++;
//	printf("%d", mid);
//	return 0;
//}

//法二：for循环
int main()
{
	int n, sum = 0, temp=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		temp += 2 * pow(10, i);
		sum += temp;	
	}
	printf("%d", sum);
return 0;
}
