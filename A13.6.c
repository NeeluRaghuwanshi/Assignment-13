//recursive function to calculate factorial of a given number
#include<stdio.h>
int fact(int);
int main()
  { int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("facorial is %d",fact(x));
    return 0;

  }
int fact(int n)
  {
   if(n>0)
     return (n*fact(n-1));
   else
     return 1;

  }
