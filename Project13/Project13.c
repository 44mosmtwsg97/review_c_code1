#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ�����֡��ո�������ַ��ĸ�����
int main()
{
	char arr[200],i=0;
	int digit = 0, zf = 0, en = 0, blank = 0;
	scanf("%[^\n]", arr);
	while (arr[i] != '\0')
	{
		if (arr[i] >= 0 && arr[i] < 9) digit++;
		else if (arr[i] > 'a' && arr[i] < 'z' || arr[i]>'A' && arr[i] < 'Z') en++;
		else if (arr[i] == ' ') blank++;
		else zf++;
		i++;
	}
	printf("%d %d %d %d", en, digit, blank, zf);
	return 0;
}