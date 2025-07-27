#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//给出一个不多于5位的整数，要求 、
// 1、求出它是几位数 
// 2、分别输出每一位数字 
// 3、按逆序输出各位数字，
// 例如原数为321,应输出123
int main()
{
	int arr[10], num, i = 0;
	scanf("%d", &num);
	while (num > 0) arr[i++] = num % 10, num /= 10;
	printf("%d\n", i);
	for (int j = i-1; j >= 0; j--) printf("%d", arr[j]);
	printf("\n");
	for (int k =0 ; k <i; k++) printf("%d", arr[k]);
	return 0;
}