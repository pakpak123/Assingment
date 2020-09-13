#include <stdio.h>

int main()
{
	int number, to_multiple, result;
	printf("Enter number : ");
	scanf_s("%d", &number);
	if (number != 0)
	{
		printf("Enter to_mutiple : ");
		scanf_s("%d", &to_multiple);
		for (result = 1;result <= to_multiple;result++)
		{
			printf("%d x %d = %d\n", number, result, result * number);
		}
	}
	else
	{
		printf("The results of all multiples = 0");
	}
	return 0;
}