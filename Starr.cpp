#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
