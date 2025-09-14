#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//题目：编写一个函数，根据输入的整数返回不同的值：
// 如果输入小于0，返回1；如果输入等于0，返回0；如果输入大于0，返回-1。然后在主函数中调用该函数并打印结果。

int y(int a) 
{
	if (a < 0)
	{
		return 1;
	}
	else if (a == 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}
int main() 
{
	int x = 0;
	scanf("%d",&x);
	int r = y(x);
	printf("%d\n", r);
	return 0;
}