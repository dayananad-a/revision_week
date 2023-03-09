#include <stdio.h>

void main() 
{
  int num, i, f = 1;
  printf("Enter an integer: ");
  scanf("%d", &num);
  if (num < 0)
    printf("Factorial of a negative number doesn't exist.");
  else {
    for (i=1; i<=num; ++i) 
	{
      f*= i;
    }
    printf("Factorial of %d = %d", num, f);
  }
}
