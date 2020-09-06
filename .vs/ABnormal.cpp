#include <stdio.h>

int main()
{
	int A, B;
	printf("Input A : ");
	scanf_s("%d", &A);
	printf("Input B : ");
	scanf_s("%d", &B);
	if (B != 0)
	{
		if (A == 0)
		{
			printf("\nA / B = 0");
		}
		else
		{
			printf("\nA / B = %d",A/B);
		}
	}
	else
	{
		printf("ไม่มีนิยามทางคณิตศาสตร์");
	}
	return 0;
}