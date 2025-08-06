#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//求一个3×3矩阵对角线元素之和。
int main()
{
	int arr[3][3], zline=0, fline=0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
			if (i == j) zline += arr[i][j];
			if (2== i + j)  fline += arr[i][j];
		}
	}
	
	printf("%d\n", zline);
	printf("%d\n", fline);
	return 0;
}