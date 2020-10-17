#include <stdio.h>
int triangle();
int main()
{
	triangle();
	return 0;
}

int triangle()
{
	int n;
	scanf_s("%d", &n);
	int a = 1, b = 0;
	while (a != 0 && a <= n)
	{
		int i, j;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; ++j)
			{
				printf("*");
			}
			printf("\n");
			a++;
		}
	}

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
}

