//recursive function to calculate sum of digits of a number
#include<stdio.h>
int sumnum(int);
int main()
  { int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("sum is %d",sumnum(x));
    return 0;

  }
int sumnum(int n)
  {
   int s=0;
   if(n>0)
   {
     s=sumnum(n/10)+n%10;
     return s;
   }
  }
