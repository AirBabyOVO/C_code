#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int* p1, p2, p3;  //p1��intָ�룬p2��p3��int����
int* p4, * p5, * p6; //p4,p5,p6����intָ��


//�ṹ��
//�ṹ���ǰѲ�ͬ���͵����������һ���һ���������ͣ��Զ������������
struct Stu
{
    //��Ա����
	char name[20];
	char sex[10];
	int age;
	float score;
};

void print(struct Stu* ps) //����ַ
{
	printf("%s %s %d %f\n", (*ps).name, (*ps).sex, (*ps).age, (*ps).score);
	printf("%s %s %d %f\n", ps->name, ps->sex, ps->age, ps->score); //�ȼ�������
	//�ṹ��ָ��->��Ա����
}

int main()
{
	struct Stu s = { "Mu Junhan","male",23,78.5 }; 
	//�ṹ�����s,������s�����������ֿ�ͷ(��202119162)
	printf("%s %s %d %f\n", s.sex, s.name, s.age, s.score);  //˳��Ӱ�����
	//�ṹ�����.��Ա����

	print(&s); //����ַ
	
	return 0;
}