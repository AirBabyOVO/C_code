#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>;
#include <string.h>;
#define MAX 100;    //define����ı�ʶ��������������ֵ�MAX����100

enum COLOR      //ö�ٳ���
{
	RED,
	GREEN,
	BLUE
};



int main()
{
	//%d - ��ӡʮ��������
	//%c - ��ӡ�ַ�
	//%s - ��ӡ�ַ���
	//%f - ��ӡ������
	//%lf - ��ӡ˫���ȸ�����
	//%zu - ��ӡsize_t����

	enum COLOR c = RED;  //������ǰ�涨���ö�ٳ���
	//���泣��
	30;
	'w';//�ַ�����
	"abc"; //�ַ�������,C������û���ַ������ͣ��ַ���������ʵ���ַ����飬������ĸ�õ��������������ַ�����˫����������
	char arr1[] = "hello"; //�ַ������Ҫʹ���ַ�����arr[],���������治д���֣����������Զ�����ռ�,�ַ����Դ�һ��������'\0'������hello\0��
	printf("%s\n", arr1);
	int length = strlen(arr1);  //�����ַ������ȣ�������������'\0'string length ,����strlen()��Ҫ����ͷ�ļ�string.h
	printf("arr1 length = %d\n", length);
	printf("\\0\n");       //���һ����б�ܺ�һ��0


	int a = 10;
	a = 20;
	printf("%d\n", a);

	//const���εĳ�����
	const int b = 87; //����const֮��b�Ͳ��ܱ��޸���,����b��Ȼ�Ǳ���
	//b = 44;         //ȥ��ע�;ͻᱨ��
	printf("%d\n", b);
	int arr2[] = { 0,2,3 };//���鸳ֵ���ü�\0�����������Զ�����,��Ҫ���ַ�����һ��ֵҪ����\0
	


	return 0;
}