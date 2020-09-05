#include <stdio.h>
int main()
{
	int C;
	printf("Enter your temperature: ");
	scanf_s("%d", &C);

	int F, k;
	F = (C - 32) / 5;
	k = C + 273;
	if (C >= 32)
	{
		if (C = 32)
		{
			printf("Falenheit is 0 falenheit");
			printf("\nKelvin is %d K", k);
		}
		else
		{
			printf("Falenheit is %d falenheit", F);
			printf("\nKelvin is %d K", k);
		}
	}
	else
	{
		printf("Falenheit is not calculate");
		printf("\nKelvin is %d K", k);
	}
	return 0;
}
