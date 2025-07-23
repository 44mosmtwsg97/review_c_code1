#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//输入两个整数a和b，计算a + b的和
// 本题很简单，但是注意此题是多组测试数据，即需要不停的接收系统的测试输入，你都可以计算结果并输出
int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b))/*;*/
        /*while循环结尾不需要添加分隔符“；”*/
        printf("%d\n", a + b);
        return 0;
}