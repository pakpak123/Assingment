#include <stdio.h>

int main()

{
	int B, C, D, F;
	printf("Input your bill : ");
	scanf_s("%d", &B);
	if (B != 0)
	{
		if (1000 <= B)
		{
			if (B < 10000)
			{
				C = B * 0.9;
				printf("You must pay %d bath", C);
			}
			else
			{
				if (B < 50000)
				{
					D = B * 0.85;
					printf("You must pay %d bath", D);
				}
				else
				{
					F = B * 0.8;
					printf("You must pay %d bath", F);
				}
			}
		}
		else
		{
			printf("You must pay %d bath", B);
		}
	}
	else
	{
		printf("It's impossible'");
	}
	return 0;
}