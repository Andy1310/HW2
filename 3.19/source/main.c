#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float lopr, inra, day, inchar;
	while (1)
	{
		printf("Enter loan principal(-1 to end):");
		scanf_s("%f", &lopr);
		if (lopr == -1)
		{
			break;
		}
		printf("Enter interest rate:");
		scanf_s("%f",&inra);
		printf("Enter term of the loan in days:");
		scanf_s("%f", &day);
		inchar = lopr * inra * day / 365;
		printf("The interest charge is $%f\n\n",inchar);
	}
	system("pause");
	return 0;
}