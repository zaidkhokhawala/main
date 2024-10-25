#include <stdio.h>

 main() {
    int a[3][3] = {{6, 9, 5}, {6, 9, 5}, {6, 9, 5}};
    int i, j;

    // Loop through the rows
    for (i = 0; i < 3; i++) {
        // Loop through the columns
        for (j = 0; j < 3; j++) {
            printf("%d\n ", a[i][j]);
        }
      
    }

    
}

