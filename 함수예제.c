#include<stdio.h>
#pragma warning (disable : 4996)

int Max(int n1, int n2, int n3)
{
	if (n1 > n2)
		return (n1 > n3) ? n1 : n3;
	else
		return (n2 > n3) ? n2 : n3;

}

int Min(int n1, int n2, int n3)
{
	if (n1 < n2)
		return (n1 < n3) ? n1 : n3;
	else
		return (n2 < n3) ? n2 : n3;

}

int main(void)
{
	int num1, num2, num3;

	printf("세 개의 정수를 입력하세요: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("가장 큰 수: %d\n", Max(num1, num2, num3));
	printf("가장 작은 수: %d\n", Min(num1, num2, num3));

	return 0;
}

