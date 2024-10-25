#include <stdio.h>

 main() {
    int a[4], b[4], sum[4];
    int i;

    // Input for the first array
   
    for (i = 0; i < 4; i++) {
    	 printf("Enter  numbers for the first array:");
        scanf("%d", &a[i]);
    }#include <stdio.h>

 main() {
    int a[4], b[4], sum[4];
    int i;

    // Input for the first array
   
    for (i = 0; i < 4; i++) {
    	 printf("Enter 4 numbers for the first array:");
        scanf("%d", &a[i]);
    }

    // Input for the second array
    
    for (i = 0; i < 4; i++) {
    	printf("Enter 4 numbers for the second array:\n");
        scanf("%d", &b[i]);
    }

    // Adding the two arrays
    for (i = 0; i < 4; i++) {
        sum[i] = a[i] + b[i];
    }

    // Printing the result
    printf("Sum of the two arrays:\n");
    for (i = 0; i < 4; i++) {
        printf("%d\n", sum[i]);
    }

}


    // Input for the second array
    
    for (i = 0; i < 4; i++) {
    	printf("Enter  numbers for the second array:");
        scanf("%d", &b[i]);
    }

    // Adding the two arrays
    for (i = 0; i < 4; i++) {
        sum[i] = a[i] + b[i];
    }

    // Printing the result
    printf("Sum of the two arrays:\n");
    for (i = 0; i < 4; i++) {
        printf("%d\n", sum[i]);
    }

}

