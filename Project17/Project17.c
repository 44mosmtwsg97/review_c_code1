#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//打印出所有"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该本身。
//例如：153是一个水仙花数，因为153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3。
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
