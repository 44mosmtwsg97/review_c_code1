#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//给出一百分制成绩，要求输出成绩等级‘A’、‘B’、‘C’、‘D’、‘E’。 
//90分以及90分以上为A，80 - 89分为B，70 - 79分为C，60 - 69分为D，60分以下为E。

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