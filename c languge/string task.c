//strcat(a,b) : string mearge karne ke liye  built in function
#include<stdio.h>

conc()
{
	char a [5];
	char b [5];
	printf("enter string 1 : ");
	gets(a);
	printf("enter string 2 : ");
	gets(b);
	
	printf("merge string is : %s",strcat(a,b));
}
main()
{
	conc();
}
