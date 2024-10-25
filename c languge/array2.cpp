#include <stdio.h>
 main() {
    int a[4], sum = 0;
    int i;
    for (i = 0; i < 4; i++) {
        printf("Enter number: ");
        scanf("%d", &a[i]);  // Corrected here
        sum += a[i];
    }
    for (i = 0; i < 4; i++) {
        printf("%d\n", a[i]);
    }
    printf("Sum: %d\n", sum);  // Added to display the sum
   
}

