#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	float invest,a,b,c,d,e;
	while (1)
	{
		printf("Enter your investment(-1 to end):");
		scanf_s("%f", &invest);
		if (invest == -1)
		{
			break;
		}
		a = invest * (pow(1.1, 15));
		b = invest * (pow(1.105, 15));
		c = invest * (pow(1.11, 15));
		d = invest * (pow(1.115, 15));
		e = invest * (pow(1.12, 15));
		printf("Compound-Interest in interest rates of 10.0%:  %f\n", a);
		printf("Compound-Interest in interest rates of 10.5%:  %f\n", b);
		printf("Compound-Interest in interest rates of 11.0%:  %f\n", c);
		printf("Compound-Interest in interest rates of 11.5%:  %f\n", d);
		printf("Compound-Interest in interest rates of 12.0%:  %f\n\n", e);
	}
	system("pause");
	return 0;
}