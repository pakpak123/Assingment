#include <stdio.h>

int main()
{
	/////*A.D. is Anno Domini and BE is Buddhist era */////
	int A, BE;
	printf("Input A.D. : ");
	scanf_s("%d", &A);
	if (A >= 0)
	{
		BE = A + 543;
		printf("Buddhist era is %d", BE);
	}
	else
	{
		printf("Please insert number that is greater or equal zero");
	}

	return 0;
}