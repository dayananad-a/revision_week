#include<stdio.h>
#include<string.h>
void main()
{
	int i, c=0;
	char str[100];
	printf("Enter a string: ");
	gets(str);
	for( i=0; i<=strlen(str); i++ )
	{
		if( str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U' )
		{
			c++;
		}
	}
	printf("The number of vowels in the given string is %d", c);
}
