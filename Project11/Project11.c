#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��ҵ���ŵĽ����������I��ɡ�
//����I���ڻ����100000Ԫ�ģ��������10%;
//�������100000Ԫ�����ڻ����200000Ԫ��100000 < I��200000��ʱ�����ڵ���100000Ԫ���ְ�10����ɣ�����100000Ԫ�Ĳ��֣������ 7.5 %;
//200000 < I��400000ʱ������200000Ԫ�����԰������취��ɣ���ͬ��������200000Ԫ�Ĳ��ְ�5����ɣ�
//400000 < I��600000Ԫʱ������400000Ԫ�Ĳ��ְ�3����ɣ�
//600000 < I��1000000ʱ������600000Ԫ�Ĳ��ְ�1.5 % ��ɣ�
//	 I > 1000000ʱ������1000000Ԫ�Ĳ��ְ�1 % ��ɡ�
//�Ӽ������뵱������I, ��Ӧ������������
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
