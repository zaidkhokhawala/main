#include<stdio.h>
main()
{
int a[4],sum=0; //dynamic
int i;
for (i=0;i<4;i++)
    {
	printf("enter number : ");
	scanf("%d" ,a[i]);
	sum=sum+a[i];
	}
    for (i=0;i<4;i++)
{printf("%d\n" ,a[i]);
}
}
