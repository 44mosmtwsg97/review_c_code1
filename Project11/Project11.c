#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//企业发放的奖金根据利润I提成。
//利润I低于或等于100000元的，奖金可提10%;
//利润高于100000元，低于或等于200000元（100000 < I≤200000）时，低于等于100000元部分按10％提成，高于100000元的部分，可提成 7.5 %;
//200000 < I≤400000时，低于200000元部分仍按上述办法提成（下同），高于200000元的部分按5％提成；
//400000 < I≤600000元时，高于400000元的部分按3％提成；
//600000 < I≤1000000时，高于600000元的部分按1.5 % 提成；
//	 I > 1000000时，超过1000000元的部分按1 % 提成。
//从键盘输入当月利润I, 求应发奖金总数。
int bonus(int profit)
{
	if (profit <= 100000) return profit * 0.1;
	else if (profit > 100000 && profit <= 200000)
		return bonus(100000) + (profit - 100000) * 0.075;
	else if (profit > 200000 && profit <= 400000)
		return bonus(200000) + (profit - 200000) * 0.005;
	else if (profit > 400000 && profit <= 600000)
		return bonus(400000) + (profit - 400000) * 0.003;
	else if (profit > 600000 && profit <= 1000000)
		return bonus(600000) + (profit - 600000) * 0.015;
	else if (profit > 1000000)
		return bonus(1000000) + (profit - 1000000) * 0.01;
}
	int main()
{
	int profit,n=0;
	scanf("%d", profit);
	n = bonus(profit);
	printf("%d\n", n);
	return 0;
}
