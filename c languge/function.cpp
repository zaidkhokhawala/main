//function//
//block of code we can use again and again 
//type of 2 built in and user define 
//step 2 is make it use it 
#include<stdio.h>
fac()
{
	int n,i,fac1=1;
	printf("enter number : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		fac1*=i;
		
	}
	printf("factorial is : %d\n",fac1);
}
main()
{
fac();
fac();
}
