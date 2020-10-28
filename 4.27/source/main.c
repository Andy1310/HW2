#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int side1, side2 ;
	float tangent;

	printf("500以內的畢氏三元數\n\n");
	printf("a     b     c\n\n");

	for (side1 = 1; side1 < 500; side1++)
	{
		for (side2 = side1 + 1; side2 < 500; side2++)
		{
			tangent = sqrt((side1 *side1)+ (side2*side2));
			if ((tangent <= 500) && (tangent - (int)tangent == 0))
			{
				printf("%d     %d     %d\n",side1,side2,(int)tangent);
			}
		}
	}
	system("pause");
	return 0;
}