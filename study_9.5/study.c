#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int age = 23;
int main() 
{
	int num1 = 10;
	int num2 = 20;
	scanf("%d %d", &num1, &num2);
	int sum = num1 + num2;
	printf("sum=%d\n", sum);
	
	
	printf("age=%d\n", age);
	int age = 24;
	printf("age=%d\n", age);
	printf("This is a C program.\n");
	printf("%u\n",sizeof(float));
	printf("%u\n",sizeof(double));
	return 0;
}
