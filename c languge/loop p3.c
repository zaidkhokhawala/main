#include <stdio.h>

 main() {
    int i, k, j;

    for (i = 1; i <= 5; i++) { // for printing rows
        for (k = 1; k <= 5 - i; k++) { // for printing spaces
            printf(" ");
        }
        for (j = 1; j <= i; j++) { // for printing columns
            printf(" *");
        }
        printf("\n");
    }

    for (i = 4; i >= 1; i--) { // for printing rows
        for (k = 1; k <= 5 - i; k++) { // for printing spaces
            printf(" ");
        }
        for (j = 1; j <= i; j++) { // for printing columns
            printf(" *");
        }
        printf("\n");
    }

}

