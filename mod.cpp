#include <stdio.h>
#include <math.h>

int main()
{
	int N;
	char name[25];
	printf("Enter your name : ");
	scanf_s("%s", &name);
	printf("input your Total price: ");
	scanf_s("%d", &N);
	if (0 < N)
	{
		if (10 <= N)
		{
			long int m, n;
			m = N % 3;
			n = N % 11;
			printf("%d %d", m, n);
			N = N * 0.9;
			printf("\n%s must to buy %ld bath", name, N);
		}
		else
		{
			int m, n;
			m = N % 3;
			n = N % 11;
			printf("%d %d", m, n);
			printf("\n%s must to buy %ld bath", name, N);
		}
	}
	else
	{
		printf("Error");
	}
	return 0;
}