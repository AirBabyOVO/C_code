#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef unsigned int uint;  //typedef定义类型别名，类型重命名

//register int c = 0; 寄存器变量，建议存储在CPU寄存器中，速度快，但数量有限，只是建议，编译器不一定采纳

//static 
//1.修饰局部变量，使其具有静态存储周期，生命周期贯穿程序始终
//2.修饰全局变量，使其只能在本文件内使用，不能被其他文件访问，作用域太大不安全
//3.修饰函数，与上类似，使函数只能在本文件内使用，不能被其他文件访问，作用域太大不安全
void print()
{
	static int count = 0; //静态局部变量,静态局部变量只初始化一次
	printf("count=%d\n", count);
	count++;
}
int main() 
{
	unsigned int a = 5;
	uint b = 10;//和unsigned int等价
	
	int x = 0;
	while (x < 10)
		 {
		 
		 x++;
		 print();
	 }
	
	return 0;
}