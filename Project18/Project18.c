#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//һ�������ǡ�õ��ڲ�������������������֮�ͣ�������ͳ�Ϊ"����"�� ���磬6������Ϊ1��2��3����6 = 1 + 2 + 3�����6��"����"��
//������ҳ�N֮�ڵ��������������������ʽ���������
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