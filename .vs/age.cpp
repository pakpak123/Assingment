#include <stdio.h>
int main()

{
	int i;
	printf("Input your ages : ");
	scanf_s("%d", &i);
	if (0 <= i)
	{
		if ((0 == i) || (i < 2))
		{
			printf("You are the babyhood");
		}
		else if ((2 <= i) && (i < 6))
		{
			printf("You are the Early childhood");
		}
		else if ((6 <= i) && (i < 12))
		{
			printf("You are the Middle childhood");
		}
		else if ((12 <= i) && (i < 15))
		{
			printf("You are the Early adolescence");
		}
		else if ((15 <= i) && (i < 25))
		{
			printf("You are the Early adulthood");
		}
		else if ((25 <= i) && (i < 40))
		{
			printf("You are the Late adolescence");
		}
		else if ((40 <= i) && (i < 60))
		{
			printf("You are the Middle age");
		}
		else
		{
			printf("You are the Old age");
		}
	}
	else
	{
		printf("It's impossible");
	}
	return 0;
}