#include <stdio.h>

int main() 
{
    char symbol;
    int rows, cols, i, j;
    printf("Enter the symbol you want to use for the rectangle: ");
    scanf("%c", &symbol);
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= cols; j++) 
        {
            if (i == 1 || i == rows || j == 1 || j == cols) 
            {
                printf("%c ", symbol);
            } 
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
