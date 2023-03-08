#include <stdio.h>
#include <stdlib.h>
void main()
{
    char str[100];
    int i, flg=0;
    printf("Rules to be followed:\n*no caps allowed.\n*_ and . are allowed.\n*digits are allowed.\n\n" );
    printf("Please enter the string: ");
    gets(str);
    for(i=0; str[i] != '\0'; i++)
	{
        if(str[i]>='a' && str[i]<='z') 
		{ 
          flg=1;
    	}    	
    	else if(str[i]>='0' && str[i]<='9')
		{
        	flg=1;
    	}
    	else if( str[i]=='_'||str[i]=='.' )
    	{
    		flg=1;
		}
		else if( str[i]>='A' && str[i]<='Z' )
    	{
    		flg=0;
		}
    	else
    	{
    		flg=0;
		}
    }
    
    if (flg==1)
    {
    	printf("The given username is valid");
	}
	else
	{
		printf("The given username is not valid");
	}
}
