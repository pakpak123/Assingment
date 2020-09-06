#include <stdio.h>

int main()

{
	float B, C, D, F;
	printf("Input your bill : ");
	scanf_s("%f", &B);
if (B != 0)
{
	if (1000 <= B)
	{
		if (B < 10000)
		{
			C = B * 0.9;
			printf("You must pay %.0f bath", C);
		}
		else
		{
			if (B < 50000)
			{
				D = B * 0.85;
				printf("You must pay %.0f bath", D);
			}
			else
			{
				F = B * 0.8;
				printf("You must pay %.0f bath", F);
			}
		}
	}
	else
	{
		printf("You must pay %.0f bath", B);
	}
}
else
{
	printf("It's impossible'");
}
return 0;
}