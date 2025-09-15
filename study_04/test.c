#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int w = 0;
	int i = 1;
	
	for (; i <= n; i++)
	{
		for (w = 1; w <= (n - 1) * 2 + 1; w++)
		{
			if (w == i)
				printf("*");
			else if (w == (n - 1) * 2 + 2 - i && w != i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}