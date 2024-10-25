#include <stdio.h>
 main()
{
    char a[10];
   int i,len=0;
   printf("enter name : ");
   gets(a);
   
   for (i=0;a[i]!='\0';i++)
   {
   	len++;
   }
   printf("length of name is : %d",len);
}

