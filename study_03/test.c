#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>;
#include <string.h>;
#define MAX 100;    //define定义的标识符常量，后面出现的MAX都是100

enum COLOR      //枚举常量
{
	RED,
	GREEN,
	BLUE
};



int main()
{
	//%d - 打印十进制整数
	//%c - 打印字符
	//%s - 打印字符串
	//%f - 打印浮点数
	//%lf - 打印双精度浮点数
	//%zu - 打印size_t类型

	enum COLOR c = RED;  //调用了前面定义的枚举常量
	//字面常量
	30;
	'w';//字符常量
	"abc"; //字符串常量,C语言中没有字符串类型，字符串常量其实是字符数组，单个字母用单引号括起来，字符串用双引号括起来
	char arr1[] = "hello"; //字符串存放要使用字符数组arr[],方括号内面不写数字，编译器会自动分配空间,字符串自带一个结束符'\0'，即“hello\0”
	printf("%s\n", arr1);
	int length = strlen(arr1);  //计算字符串长度，不包括结束符'\0'string length ,函数strlen()需要包含头文件string.h
	printf("arr1 length = %d\n", length);
	printf("\\0\n");       //输出一个反斜杠和一个0


	int a = 10;
	a = 20;
	printf("%d\n", a);

	//const修饰的常变量
	const int b = 87; //加了const之后，b就不能被修改了,但是b仍然是变量
	//b = 44;         //去掉注释就会报错
	printf("%d\n", b);
	int arr2[] = { 0,2,3 };//数组赋值不用加\0，编译器会自动加上,但要是字符串逐一赋值要加上\0
	


	return 0;
}