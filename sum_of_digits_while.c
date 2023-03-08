#include<stdio.h>
#include<conio.h>
void main()
{
	int num, sum, rem, n;
	printf("Enter the number of digits:");
	scanf("%d", &n);
	printf("Enter a %d digit number:", n);
	scanf("%d", &num);
	while(num>0)
	{
		rem=num%10;
		sum+=rem;
		num/=10;
	}
	printf("The sum of the %d digits number is %d", n, sum);
}
