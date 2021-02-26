#include<stdio.h>
#pragma warning (disable : 4996)

double CelToFah(double Cel)
{
	return 1.8 * Cel + 32;
}

double FahToCel(double Fah)
{
	return (Fah - 32) / 1.8;
}

int main(void)
{
	int s;
	int i;
	double ondo;

	printf("섭씨를 화씨로 변환 입력(1) \n 화씨를 섭씨로 변환 입력(2) \n : ");
	scanf_s("%d", &s);

	if (s == 1)
	{
		printf("섭씨온도를 입력하세요: ");
		scanf("%lf", &ondo);
		printf("변환된 화씨온도: %f\n", CelToFah(ondo));
	}

	else if (s == 2)
	{
		printf("화씨온도를 입력하세요: ");
		scanf("%lf", &ondo);
		printf("변환된 섭씨온도: %f\n", FahToCel(ondo));
	}
	else
	{
		for (i = 0; i < 200; i++)
		{
			printf("1과 2중에 입력하세요!\n");
			printf("섭씨를 화씨로 변환 입력(1) \n 화씨를 섭씨로 변환 입력(2) \n : ");
			scanf_s("%d", &s);
			if (s == 1)
			{
				printf("섭씨온도를 입력하세요: ");
				scanf("%lf", &ondo);
				printf("변환된 화씨온도: %f\n", CelToFah(ondo));
				break;
			}
			else if (s == 2)
			{
				printf("화씨온도를 입력하세요: ");
				scanf("%lf", &ondo);
				printf("변환된 섭씨온도: %f\n", FahToCel(ondo));
				break;
			}
		}
	}
	return 0;
}
