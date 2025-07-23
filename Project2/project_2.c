#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//学习了输出语句，请参照例题，编写一个程序，输出以下信息：
//
//**************************
//Hello World!
//**************************
//
//注意：Hello与World之间有一个空格以及大小写问题
//* 也是输出的一部分，别光打印Hello World！
int main()
{
	int a=0, b=0;
	while (a++ < 26)  printf("*");
		printf("\n");
		printf("Hello World!\n");
	while (b++ < 26)  printf("*");
	return 0;
}