#include <stdio.h>
void main()
{
	int i;
	printf("Enter the number:");
	scanf("%d", &i);
	switch
	{
		case <0:
			printf("The entered number is negative");
			break
		case >0:
			printf("The entered number is positive");
			break
		case ==0:
			printf("The entered number is not positive or negative. i.e. the number is 0.");
			break
	}
}
