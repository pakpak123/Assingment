#include <stdio.h>

int main()
{
	int i, m;
	printf("Enter Hours : ");
	scanf_s("%d", &i);
	if (0 < i)
	{
		printf("Total : %d", 250 * i);
		printf("\nPay : ");
		scanf_s("%d", &m);
		if (250 * i < m)
		{
			printf("Change : %d", m - (250 * i));
		}
		else
		{
			printf("Your money don't enough");
		}
	}
	else
	{
		printf("ERROR");
	}
	return 0;
}