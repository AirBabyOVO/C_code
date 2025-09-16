#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 7 / 2;
	int b = 7 % 2;
	float c = 7 / 2;
	printf("%d\n", a);   //进行整型运算无法得到小数
	printf("%d\n", b);   //%为取模运算，即余数，这是C语言中的取模不是数学中的取模
	//取模运算只能用于整数
	printf("%f\n", c);
	printf("%.1f\n", c);  //%.1f表示保留一位小数

	a += 3;  //和a=a+3一样
	a -= 3;  //和a=a-3一样

	a = 10;
	printf("%d\n", sizeof a);  //返回变量a的字节大小
	printf("%d\n", sizeof(int)); //返回int类型的字节大小
	//注意sizeof是一个操作符，不是一个函数，可以不加括号,但是对于类型必须加括号如sizeof(int),计算出来的单位是字节



	int x = (int)3.14;  //强制类型转换，把3.14转换为int类型，取整数部分，结果为3
	printf("%d\n", x);

	int m = 10;
	int n = 3;
	int q = m < n ? m : n;  //三目运算符，也叫条件操作符，？号前的表达式为真返回m，为假返回n，结果为3
	printf("%d\n", q);

	//逗号表达式：从左到右依次计算各个表达式，整个逗号表达式的值为最后一个表达式的值
	int i = 10;
	int j = 20;
	int k = 0;
	int p = (i = j + k, k++, i - k);  //p的值为19
	printf("%d\n", p);

	return 0;
}