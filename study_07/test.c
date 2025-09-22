#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int* p1, p2, p3;  //p1是int指针，p2和p3是int变量
int* p4, * p5, * p6; //p4,p5,p6都是int指针


//结构体
//结构体是把不同类型的数据组合在一起的一种数据类型，自定义的数据类型
struct Stu
{
    //成员变量
	char name[20];
	char sex[10];
	int age;
	float score;
};

void print(struct Stu* ps) //传地址
{
	printf("%s %s %d %f\n", (*ps).name, (*ps).sex, (*ps).age, (*ps).score);
	printf("%s %s %d %f\n", ps->name, ps->sex, ps->age, ps->score); //等价于上面
	//结构体指针->成员变量
}

int main()
{
	struct Stu s = { "Mu Junhan","male",23,78.5 }; 
	//结构体变量s,命名（s）不能用数字开头(如202119162)
	printf("%s %s %d %f\n", s.sex, s.name, s.age, s.score);  //顺序不影响输出
	//结构体变量.成员变量

	print(&s); //传地址
	
	return 0;
}