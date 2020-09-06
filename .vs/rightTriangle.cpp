#include <stdio.h>

int main()
{
	float A, B, C;
	printf("Input A : ");
	scanf_s("%f", &A);
	printf("\nInput B : ");
	scanf_s("%f", &B);
	printf("\nInput C : ");
	scanf_s("%f", &C);

	if (A > 0 && B > 0 && C > 0)
	{
		if ((A * A) + (B * B) == (C * C))
		{
			printf("\nIt is a right triangle.");
		}
		else if ((B * B) + (C * C) == (A * A))
		{
			printf("\nIt is a right triangle.");
		}
		else if ((B * B) + (A * A) == (C * C))
		{
			printf("\nIt is a right triangle.");
		}
		else
		{
			printf("\nIt is not a right triangle.");
		}
	}
	else
	{
		printf("\nwidth and height must be greater than 0");
	}
	return 0;
}