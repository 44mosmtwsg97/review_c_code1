#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ���A������B������C������D������E���� 
//90���Լ�90������ΪA��80 - 89��ΪB��70 - 79��ΪC��60 - 69��ΪD��60������ΪE��

char rank(int grade)
{
	if (grade > 90) return 'A';
	else if (grade >= 80 && grade < 90) return 'B';
	else if (grade >= 70 && grade < 80) return 'C';
	else if (grade >= 60 && grade < 70) return 'D';
	else if (grade < 60) return 'E';
}
int main()
{
	int grade;
	while (scanf("%d", &grade)) printf("%c\n", rank(grade));
	return 0;
}