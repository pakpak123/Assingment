#include <stdio.h>

int main()
{
	int base, exponent, i, pow = 1;
	printf("Input your base : ");
	scanf_s("%d", &base);
	if (base != 0)
	{
		printf("\nInput your exponent : ");
		scanf_s("%d", &exponent);
		if (exponent != 0)
		{
			for (i = 1;i <= exponent;i++)
			{
				pow = pow * base;
			}
			printf("\n Result is %d", pow);
		}
		else
		{
			printf("\nResult is 1 ");
		}
	}
	else
	{
		printf("Error");
	}
	return 0;
}