#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef unsigned int uint;  //typedef�������ͱ���������������

//register int c = 0; �Ĵ�������������洢��CPU�Ĵ����У��ٶȿ죬���������ޣ�ֻ�ǽ��飬��������һ������

//static 
//1.���ξֲ�������ʹ����о�̬�洢���ڣ��������ڹᴩ����ʼ��
//2.����ȫ�ֱ�����ʹ��ֻ���ڱ��ļ���ʹ�ã����ܱ������ļ����ʣ�������̫�󲻰�ȫ
//3.���κ������������ƣ�ʹ����ֻ���ڱ��ļ���ʹ�ã����ܱ������ļ����ʣ�������̫�󲻰�ȫ
void print()
{
	static int count = 0; //��̬�ֲ�����,��̬�ֲ�����ֻ��ʼ��һ��
	printf("count=%d\n", count);
	count++;
}
int main() 
{
	unsigned int a = 5;
	uint b = 10;//��unsigned int�ȼ�
	
	int x = 0;
	while (x < 10)
		 {
		 
		 x++;
		 print();
	 }
	
	return 0;
}