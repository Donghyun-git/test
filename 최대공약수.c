#include<stdio.h>
#pragma warning (disable : 4996)



int Max(int num1, int num2)
{
	if ((num1 % num2) == 0)
	{
		return num2;
	}
	else
	{
		return Max(num1, num1 % num2);
	}
}




int main(void)
{
	int num1=0, num2=0;
	int r = 0;
	int i = 0;

	printf("두 개의 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > 0 && num2 > 0)
	{
		if(num1>num2)
		{
			r = Max(num1, num2);

		}
		else if (num2 > num1)
		{
			r = Max(num2, num1);
		}
	}
	else
	{
		for (i = 0; i < 200; i++)
		{
			printf("오류, 양의 정수만 다시 입력하세요: ");
			scanf_s("%d %d", &num1, &num2);
			
			if (num1 > 0 && num2 > 0)
				break;

			if (num1 > num2)
			{
				r = Max(num1, num2);

			}
			else if (num2 > num1)
			{
				r = Max(num2, num1);
			}
		}
	}

	printf("두 수의 최대공약수: %d", Max(num1, num2));
	

	return 0;

}

