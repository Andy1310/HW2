#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int workedhour;
	float hourlyrate, salary;
	while (1)
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%d",&workedhour);
		if (workedhour == -1)
		{
			break;
		}
		printf("Enter hourly rate of the worker($00.00):");
		scanf_s("%f", &hourlyrate);
		if (workedhour > 40)
		{
			salary = (workedhour+0.5) * hourlyrate;
			printf("Salary is $%f\n\n",salary);
		}
		else
		{
			salary = workedhour * hourlyrate;
			printf("Salary is $%f\n\n", salary);
		}
	}
	system("pause");
	return 0;
}