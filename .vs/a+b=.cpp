#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Input a : ");
	scanf_s("%d", &a);
	printf("\nInput b : ");
	scanf_s("%d", &b);
	c = a + b;
	if (c > 0)
	{
		printf("\na + b > 0");
	}
	else if (c < 0)
	{
		printf("\na + b < 0");
	}
	else
	{
		printf("\na + b = 0");
	}
	return 0;
}