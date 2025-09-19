#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//.h 头文件（函数声明、宏定义、常量定义、结构体定义、类型声明、头文件包含等）
//.c  源文件（函数实现、变量定义、逻辑代码等）

#define NUM 10 //定义一个常量，值为10
#define add(a,b) ((a)+(b)) //定义一个宏，计算两个数的和，跟函数类似，参数是无类型的

int main()
{
	int i = 10;
	&i; //取地址符，获取变量i的内存地址
	printf("%p\n", &i); //%p是打印地址的格式化字符串
	int* p = &i; //定义一个指针变量p，存储变量i的地址
	//指针变量的类型必须和它所指向的变量类型一致
	//存储指针（地址）的变量叫指针变量
	//加*说明是指针，变量名仍然是p，int是指针变量p所指向的变量类型
	char c = 'A';
	char* pc = &c; //定义一个指向字符类型变量的指针变量
	*p; //*是解引用符，意思就是通过指针变量访问它所指向的变量，*p表示访问指针变量p所指向的变量i
	*pc = 'B'; //通过指针变量修改它所指向的变量的值
	printf("%c\n", *pc);

	//指针变量的大小是固定的，和它所指向的变量类型无关
	//32位系统下，指针变量的大小是4个字节
	//64位系统下，指针变量的大小是8个字节
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(void*)); //void*是万能指针，可以指向任何类型的变量
	printf("%d\n", sizeof(float*));

	return 0;
}