#include <stdio.h>
#include <math.h>
int main()
{
	int A, B;
	printf("input a frog jump about: ");
	scanf_s("%d", &A);
	printf("input distance is: ");
	scanf_s("%d", &B);
	if (A < B)
	{
		if (B % A == 0)
		{
			printf("The frog jumps %d times", B / A);
		}
		else
		{
			int i = B / A;
			i++;
			printf("The frog jumps %d times", i);
		}
	}
	else
	{
		printf("The frog must not jump,but it can walk.");
	}
	return 0;
}