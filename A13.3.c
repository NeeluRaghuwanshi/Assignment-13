//recursive function to calculate sum of first N even numbers
#include<stdio.h>
int sumeven(int);
int main()
  { int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("sum is %d",sumeven(x));
    return 0;

  }
int sumeven(int n)
  {
   int s=0;
   if(n>0)
   {
     s=2*n+sumeven(n-1);
     return s;
   }
  }
