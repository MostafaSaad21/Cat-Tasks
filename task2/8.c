#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the number\n");
    int x ;
    scanf("%d",&x);
    for(int i=1; i<=12; i++)
    {
            printf("%d * %d = %d ",x ,i ,(x*i));
            printf("\n");
    }





    return 0;
}