//recursive function to calculate HCF of two numbers
#include<stdio.h>
int hcf(int,int);
int main()
   {
       int n1,n2;
       printf("Enter two numbers:\n");
       scanf("%d %d",&n1,&n2);
       printf("HCF is %d",hcf(n1,n2));
       return 0;
   }
int hcf(int a,int b)
    {
      while(a!=b)
      {
      if(a>b)
      return hcf(a-b,b);
      else
      return hcf(a,b-a);
      }
    }
