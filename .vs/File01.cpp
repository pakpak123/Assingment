#include <stdio.h>
int main()

{
	int fac, count = 1;
	long int sum = 1;
	printf("Please enter your fractorial : ");
	scanf_s("%d", &fac);
	while (count <= fac)
	{
		sum = sum * count;
		count += 1;
	}
	printf("Result of %d is %ld", fac, sum);
	return 0;
}
