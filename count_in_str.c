#include <stdio.h>
#include <stdlib.h>
void main()
{
    char str[100];
    int i;
    int upper=0, lower=0, special=0, dig=0;
    printf("Please enter the string: ");
    gets(str);
    for(i=0; str[i] != '\0'; i++)
	{
        if(str[i]>='A' && str[i]<='Z') 
		{
            upper++;
        }
        else if(str[i]>='a' && str[i]<='z') 
		{ 
               lower++;
    	}
    	else if(str[i]>='0' && str[i]<='9')
		{
        	++dig;
    	}
    	else
    	{
    		special++;
		}
    }
    printf("\nUpper case letters: %d", upper);
    printf("\nLower case letters: %d", lower);
    printf("\nDigits: %d", dig);
    printf("\nSpecial characters: %d", special);
}
