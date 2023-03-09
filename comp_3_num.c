#include <stdio.h>
int main() 
{
    int num1, num2, num3, largest, smallest;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Enter number 3: ");
    scanf("%d", &num3);
    largest = num1;
    if (num2 > largest) 
    {
        largest = num2;
    }
    if (num3 > largest) 
    {
        largest = num3;
    }

    smallest = num1;
    if (num2 < smallest) 
    {
        smallest = num2;
    }
    if (num3 < smallest) 
    {
        smallest = num3;
    }
    printf("Largest number is %d\n", largest);
    printf("%d is ", largest);
    if (largest % 2 == 0) 
    {
        printf("even\n");
    } 
    else 
    {
        printf("odd\n");
    }
    printf("Smallest number is %d\n", smallest);
    printf("%d is ", smallest);
    if (smallest % 2 == 0) 
    {
        printf("even\n");
    } 
    else 
    {
        printf("odd\n");
    }
    
    
    return 0;
}
