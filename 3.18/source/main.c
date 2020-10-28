#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float sid, sal;
	while (1)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f",&sid);
		if (sid == -1)
		{
			break;
		}
		sal = 200 + (sid*0.09);
		printf("Salary is:  %f\n", sal);
	}
	system("pause");
	
}