#include <stdio.h>
void main() 
{
    char s[100];
    printf("Enter the string:");
    gets(s);
    int i;
    for (i = 0; s[i] != '\0'; ++i);    
    printf("Length of the string: %d", i);
}
