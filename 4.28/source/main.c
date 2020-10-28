#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float h, s;

	printf("輸入您的薪資代碼(1代表經理人員，2代表時薪工，3代表抽佣金工，4代表零工):");
	scanf_s("%d", &a);
	switch(a)
	{
	case 1:
		printf("請輸入週薪:");
		scanf_s("%f", &s);
		printf("您的薪水是:$%f\n", s);
		break;
	default:
		break;

	case 2:
		printf("請輸入每小時工資:");
		scanf_s("%f", &s);
		printf("請輸入每週工作時數:");
		scanf_s("%f",&h);
		if (h > 40)
		{
			s = s * h + s * (h - 40)*1.5;
			printf("您的薪水是:$%f\n", s);
		}
		else
		{
			s = s * h;
			printf("您的薪水是:$%f\n", s);
		}
		break;
	
	case 3:
		printf("請輸入當週銷售金額:");
		scanf_s("%f", &h);
		s = 250 + (h * 0.057);
		printf("您的薪水是:$%f\n", s);
		break;

	case 4:
		printf("請輸入每週所生產的件數:");
		scanf_s("%f", &h);
		printf("請輸入每件可分得酬勞:");
		scanf_s("%f", &s);
		s = s * h;
		printf("您的薪水是:$%f\n", s);
		break;
	}	
	system("pause");
	return 0;
}