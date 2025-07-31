#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。 
//它在第N次落地时反弹多高？共经过多少米？ 保留两位小数
int main()
{
	double M, N, temp ;
	scanf("%lf %lf", &M, &N);
	double sum = M;
	while(--N)/*或者for (int i = 1; i < N; i++)*/
		/*循环N-1次*/
	{
		temp = M / 2, M = temp, sum += 2*temp;
	}
	printf("%lf %lf",temp, sum);
	return 0;
}