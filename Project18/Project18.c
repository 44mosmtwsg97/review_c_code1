#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//一个数如果恰好等于不包含它本身所有因子之和，这个数就称为"完数"。 例如，6的因子为1、2、3，而6 = 1 + 2 + 3，因此6是"完数"。
//编程序找出N之内的所有完数，并按下面格式输出其因子
int main()
{
	int N, i = 1, temp = 0;
	scanf("%d", &N);
	for (i = 1; i < N; i++)
	{
		temp = 0;
		for (int j = 1; j < i; j++)
			if (0 == i % j) temp += j;
		if (temp == i)
		{
			printf("%d", i);
			for (int k = 1; k < i; k++)
				if (0 == i % k)
					printf("%d", k);
		}

	}
	return 0;
}