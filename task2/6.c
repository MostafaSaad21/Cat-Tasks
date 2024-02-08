#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the result of 3 x 4\n");
    int x;
    scanf("%d",&x);

    if(x!=12)
    {
    while(x!=12)
    {
    printf("Try again ");
    scanf("%d",&x);
    }
    }
       printf("Thanks");



    return 0;
}