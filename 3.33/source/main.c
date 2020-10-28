#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int b, l, bn, ln;
	char sign1, sign2;
	printf("Enter the length and breadth of the rectangle\n");
	printf("Length:");
	scanf_s("%d",&l);
	printf("breadth:");
	scanf_s("%d", &b);
	for (ln = 0; ln < l; ln++)
	{
		for (bn = 0; bn < b; bn++)
		{
			if (bn == 0 || bn == b-1||ln==0||ln==l-1)
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
}