//WAP to find simple interest
#include <stdio.h>

main() {
    float p, r, t, simInt; //data members
    printf("Enter the principal amount: ");
    scanf("%f", &p);	//input principle
    printf("\nEnter the rate of interest: ");
    scanf("%f", &r);	//input rate
    printf("\nEnter the time period: ");
    scanf("%f", &t);	//input time
    simInt = (p*r*t) / 100;

    printf("\nSimple Interest: %.2f\n", simInt);	

}

