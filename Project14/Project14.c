#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//��Sn = a + aa + aaa + �� + aa��aaa����n��a��ֵ֮������a��һ�����֣�Ϊ2��
//���磬n = 5ʱ = 2 + 22 + 222 + 2222 + 22222��n�ɼ������롣

//��һ���ݹ�
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

//������forѭ��
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
