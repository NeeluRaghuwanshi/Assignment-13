//recursive function to calculate sum of first N odd numbers
#include<stdio.h>
int sumodd(int);
int main()
  { int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("sum is %d",sumodd(x));
    return 0;

  }
int sumodd(int n)
  {
   int s=0;
   if(n>0)
   {
     s=2*n-1+sumodd(n-1);
     return s;
   }
  }
