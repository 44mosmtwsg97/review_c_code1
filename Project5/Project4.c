#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��һͷĸţ����ÿ�������һͷСĸţ��ÿͷСĸţ�ӵ��ĸ���ͷ��ʼ��ÿ�����Ҳ��һͷСĸţ��
//����ʵ���ڵ�n���ʱ�򣬹��ж���ͷĸţ��
//int cattle(int year)
//{
//	if ( 0<year < 4)
//		return year;
//	else
//		return cattle(year - 1) + cattle(year - 3);
//}
//int main()
//{
//	int year;
//
//	return 0;
//}

int Fuc(int K)

{

if (K == 1) return 1;

if (K == 2) return 2;

if (K == 3) return 3;



return Fuc(K - 3) + Fuc(K - 1);



}



int main()

{

int n,Num;

Num = scanf("%d", &n);
printf("%d", Num);
}

