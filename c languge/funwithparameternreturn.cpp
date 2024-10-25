#include <stdio.h>

// Function to add two numbers with parameters
 fun1(int a, int b) {
    return a + b;
}

 main() {
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("%d\n", fun1(a, b));
   
}

