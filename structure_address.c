#include <stdio.h>
struct Address 
{
    char street[100];
    char city[100];
    char state[100];
    char zip[10];
};

int main() 
{
    struct Address userAddress;
    printf("Please enter your street address: ");
    fgets(userAddress.street, 100, stdin);
    printf("Please enter your city: ");
    fgets(userAddress.city, 100, stdin);
    printf("Please enter your state: ");
    fgets(userAddress.state, 100, stdin);
    printf("Please enter your zip code: ");
    fgets(userAddress.zip, 10, stdin);
    printf("\nYour address is:\n");
    printf("%s%s%s%s", userAddress.street, userAddress.city, userAddress.state, userAddress.zip);
    return 0;
}

