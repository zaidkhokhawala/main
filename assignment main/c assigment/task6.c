//WAP to convert years into days and days into years 
#include<stdio.h>
main(){
	int year,days; //data members
	printf("Enter year: ");
	scanf("%d",&year);	//input years 
	printf("\nDays are : %f", (float)year*365);
	printf("\nEnter Days: ");
	scanf("\n%d",&days);	//input days 
	printf("Years are: %f",(float)days/365);
}

