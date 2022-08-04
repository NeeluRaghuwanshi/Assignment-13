//recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sqr(int);
int main()
  { int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("sum is %d",sqr(x));
    return 0;

  }
int sqr(int n)
  {
   int s=0;
   if(n>0)
   {
     s=n*n+sqr(n-1);
     return s;
   }
  }
