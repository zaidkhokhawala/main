#include <stdio.h>
 main()
{
    char a[10],b[10];
   int i;
   printf("enter name : ");
   gets(a);
   
   for (i=0;a[i]!='\0';i++)
   {
   	    a[i]=b[i];
   }
   printf("copy string : %s",b);
};

