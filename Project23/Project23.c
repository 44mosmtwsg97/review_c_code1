#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//用简单素数筛选法求N以内的素数。
int main()
{
	int N, flog = 0;//如果改成flog=1，那么当i=2时，虽然j<i不成立不运行，但是flog=1，结果会输出
	scanf("%d", &N);
	for(int i=2;i<=N;i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flog = 0; break; 
			}
			else flog = 1;
		}
		if (flog) printf("%d\n", i);
	}
	return 0;
}