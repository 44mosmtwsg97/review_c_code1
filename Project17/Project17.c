#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//��ӡ������"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸñ���
//���磺153��һ��ˮ�ɻ�������Ϊ153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3��
int ch(int n)
{
	int arr[3];	
	arr[0] = n % 10; arr[1] = n / 10 % 10; arr[2] = n / 100;
	if ((pow(arr[0], 3) + pow(arr[1], 3) + pow(arr[2], 3)) == n)return n;
	else return 0;

}
int main()
{
	for (int i = 101; i < 1000; i++) 
		if(ch(i)!=0)
			printf("%d\n", ch(i));
	return 0;
}
