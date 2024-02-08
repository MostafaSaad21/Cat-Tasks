#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the number\n");
    int x ,fact=1; ;
    scanf("%d",&x);
    while(x!=1)
    {
        fact=fact*x;
        x--;

    }
printf("%d",fact);




    return 0;
}

