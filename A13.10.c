//calculate the power of any number using recursion.
#include<stdio.h>
int power(int ,int);
int main()
   {
     int b,p;
     printf("Enter base and power value\n");
     scanf("%d %d",&b,&p);
     printf("Result is %d",power(b,p));
     return 0;
   }
int power(int b,int p)
   {
     if(p==0)
        return 1;
    else
        return b* power(b,p-1);

   }
