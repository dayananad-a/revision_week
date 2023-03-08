#include<stdio.h>
#include<conio.h>
void main()
{
	int num, sum, rem, n, i;
	printf("Enter the number of digits:");
	scanf("%d", &n);
	printf("Enter a %d digit number:", n);
	scanf("%d", &num);
	for(i=1; i<=n; i++)
	{
		rem=num%10;
		sum+=rem;
		num/=10;
	}
	printf("The sum of the %d digits number is %d", n, sum);
}
