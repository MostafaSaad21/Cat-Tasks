#include <stdio.h>

int fibonacci(int x)
{
    int a=0,b=1 ,c;
   if(x==0)
       return a;
   else if(x==1)
       return b;
   else
   {
       for(int i=1; i<x; i++)
       {
           c=a+b;
           a=b;
           b=c;

       }
       return b;
   }

}

int main() {
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    printf("Fibonacci is : %d", fibonacci(x));
    return 0;
}



