#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float h, s;

	printf("��J�z���~��N�X(1�N��g�z�H���A2�N����~�u�A3�N�������u�A4�N��s�u):");
	scanf_s("%d", &a);
	switch(a)
	{
	case 1:
		printf("�п�J�g�~:");
		scanf_s("%f", &s);
		printf("�z���~���O:$%f\n", s);
		break;
	default:
		break;

	case 2:
		printf("�п�J�C�p�ɤu��:");
		scanf_s("%f", &s);
		printf("�п�J�C�g�u�@�ɼ�:");
		scanf_s("%f",&h);
		if (h > 40)
		{
			s = s * h + s * (h - 40)*1.5;
			printf("�z���~���O:$%f\n", s);
		}
		else
		{
			s = s * h;
			printf("�z���~���O:$%f\n", s);
		}
		break;
	
	case 3:
		printf("�п�J��g�P����B:");
		scanf_s("%f", &h);
		s = 250 + (h * 0.057);
		printf("�z���~���O:$%f\n", s);
		break;

	case 4:
		printf("�п�J�C�g�ҥͲ������:");
		scanf_s("%f", &h);
		printf("�п�J�C��i���o�S��:");
		scanf_s("%f", &s);
		s = s * h;
		printf("�z���~���O:$%f\n", s);
		break;
	}	
	system("pause");
	return 0;
}