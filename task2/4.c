#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter your grade\n");
    int g;
    scanf("%d",&g);
    if(g>=85)
            printf("Excellent");

       else if(g<85 && g>=75)
    printf("very good");

       else if(g<75 && g>=65)
    printf("good");

     else if(g<65 && g>=50)
    printf("Pass");
    else
            printf("Fail");

    return 0;
}
