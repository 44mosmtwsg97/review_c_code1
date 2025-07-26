#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。
//请编程实现在第n年的时候，共有多少头母牛？
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

