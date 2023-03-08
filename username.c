#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    int i, flg=1;
    printf("Rules to be followed:\n*no caps allowed.\n*_ and . are allowed.\n*digits are allowed.\n\n" );
    printf("Please enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    if (strlen(str) == 0) 
	{
        printf("The given username is not valid");
        return 0;
    }

    for(i=0; str[i] != '\0'; i++)
	{
        if(str[i]>='a' && str[i]<='z') 
		{ 
            continue;
    	}
    	else if(str[i]>='0' && str[i]<='9')
		{
        	continue;
    	}
    	else if(str[i]=='_' || str[i]=='.')
    	{
    		continue;
		}
    	else
    	{
    		flg=0;
            break;
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
    return 0;
}
