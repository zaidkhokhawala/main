#include <stdio.h>

 main() 
{
    int n = 65; // ASCII value of 'A'
    int i, j;
    for (i = 1; i <= 5; i++) 
    {
        for (j = 1; j <= i; j++)
            printf("%c", n);
        n++;
        printf("\n"); // Move to the next line after each row
    }
}

