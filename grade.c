#include <stdio.h>
void main()
{
	int i;
	printf("Enter the student mark:");
	scanf("%d", &i);
	if( i >= 90 && i<=100 )
	{
		printf("The student's grade is 'A+' ");
	}
	else if( i>=80 && i<90 )
	{
		printf("The student's grade is 'A' ");
	}
	else if( i>=70 && i<80 )
	{
		printf("The student's grade is 'B+' ");
	}
	else if( i>=60 && i<70 )
	{
		printf("The student's grade is 'B' ");
	}
	else if( i>=50 && i<60 )
	{
		printf("The student's grade is 'C' ");
	}
	else if(i<50)
	{
		printf("The student's grade is 'F'");
	}
	else
	{
		printf("Invalid input");
	}
}
