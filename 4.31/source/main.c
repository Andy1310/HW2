#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b,c;
	
	for (a = 0; a <= 10; a=a+2)
	{
		for (c = 10; c > a; c=c-2)
		{
			printf(" ");
		}
		for (b = 0; b <= a; b++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	for (a = 9; a >= 0; a=a-2)
	{
		for (c = 9; c >=a; c=c-2)
		{
			printf(" ");
		}
		for (b = 0; b < a; b++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}