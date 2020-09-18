#include <stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	int i, j, k;
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
