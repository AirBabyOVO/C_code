#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int print(int num1, int num2, int num3)   //num1��ӡ����, num2ÿ�м���*, num3��ͷ�ռ���  
{
	int i = 1;  //����
	while (i <= num1)
	{
		int n = 1;
		while (n <= (i - 1) * num3 && i > 1)
		{
			printf(" ");
			n++;
		}
		int m = 1;
		while (m <= num2)
		{
			printf("*");
			m++;
		}
		printf("\n");
		i++;
	}
	
	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	print(a, b, c);
	
	return 0;
}