#include <stdio.h>
void main()
{
	int year;
	printf("Enter the Year to check:");
	scanf("%d", &year);
	if ( year%4==0 )
	{
		printf("The Given year %d is a leap year", year);
	}
	else
	{
		printf("The Given year %d is not a leap year", year);
	}
}
