#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//һ���M�׸߶��������䣬ÿ����غ󷵻�ԭ�߶ȵ�һ�룬�����¡� 
//���ڵ�N�����ʱ������ߣ������������ף� ������λС��
int main()
{
	double M, N, temp ;
	scanf("%lf %lf", &M, &N);
	double sum = M;
	while(--N)/*����for (int i = 1; i < N; i++)*/
		/*ѭ��N-1��*/
	{
		temp = M / 2, M = temp, sum += 2*temp;
	}
	printf("%lf %lf",temp, sum);
	return 0;
}