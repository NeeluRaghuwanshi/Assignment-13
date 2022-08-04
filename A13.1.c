//recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int sum(int);
int main()
  { int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("sum is %d",sum(x));
    return 0;

  }
int sum(int n)
  {
   int s;
   if(n==1)
     return 1;
   s=n+sum(n-1);
     return s;
  }
