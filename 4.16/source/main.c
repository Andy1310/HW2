#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d;
	printf("(A)\n\n");
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= a; b++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("(B)\n\n");
	for (a = 9; a >= 0; a--)
	{
		for (b = 0; b <= a; b++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("(C)\n\n");
	for (a = 9; a >= 0; a--)
	{
		for (c = 9; c > a; c--)
		{
				printf(" ");
		}
		for (b = 0; b <= a; b++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("(D)\n\n");
	for (a = 0; a <= 10; a++)
	{
		for (c = 10; c > a; c--)
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