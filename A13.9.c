//count the digits of a given number using recursion
#include<stdio.h>
int count(int);
int main()
   {
     int n;
     printf("Enter a number\n");
     scanf("%d",&n);
     printf("Number of digits are %d",count(n));
     return 0;

   }
int count(int n)
  {
    while(n!=0)
    return 1+count(n/10);
  }
