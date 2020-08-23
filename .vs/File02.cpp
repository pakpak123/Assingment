#include <stdio.h>

int main()

{	char grade;
	printf("Enter  character A , B , C , D or F : ");
	scanf_s("%c",&grade);
	
	switch(grade)
	{
		case 'A' : 
		printf("[80,100]");  
		break;
		case 'B' : 
		printf("[70,80]"); 
		break;
		case 'C' : 
		printf("[60,70]"); 
		break;
		case 'D' : 
		printf("[50,60]"); 
		break;
		case 'F' : 
		printf("[0,50]"); 
		break;
		defualt : 
		printf("Error grade is not correct"); 
		break;
	}

	return 0;
}
