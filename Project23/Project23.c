#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�ü�����ɸѡ����N���ڵ�������
int main()
{
	int N, flog = 0;//����ĳ�flog=1����ô��i=2ʱ����Ȼj<i�����������У�����flog=1����������
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