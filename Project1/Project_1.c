#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//������������a��b������a + b�ĺ�
// ����ܼ򵥣�����ע������Ƕ���������ݣ�����Ҫ��ͣ�Ľ���ϵͳ�Ĳ������룬�㶼���Լ����������
int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b))/*;*/
        /*whileѭ����β����Ҫ��ӷָ���������*/
        printf("%d\n", a + b);
        return 0;
}