#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��Ŀ����дһ������������������������ز�ͬ��ֵ��
// �������С��0������1������������0������0������������0������-1��Ȼ�����������е��øú�������ӡ�����

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