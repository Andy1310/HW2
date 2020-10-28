#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int acnum;
	float balance, toch, beb, tocr, crli;
	acnum = 0;
	while (1)
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &acnum);
		if (acnum == -1)
			break;
		printf("Enter beginning balance:");
		scanf_s("%f", &beb);
		printf("Enter total charge:");
		scanf_s("%f", &toch);
		printf("Enter total credits:");
		scanf_s("%f", &tocr);
		printf("Enter credit limit:");
		scanf_s("%f", &crli);
		balance = beb + toch - tocr;
		printf("Account:%d\n", acnum);
		printf("Credit limit:%f\n", crli);
		printf("Balance:%f\n", balance);
		if (balance > crli)
		{
			printf("Credit Limit Exceeded\n");
		}
	}
	system("pause");
	return 0;
}