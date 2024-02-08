#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter 3 numbers\n");
    int x,y,z;
    scanf("%d %d %d",&x ,&y ,&z);
    if(x>=y )
    {
        if(x>=z)
       printf("%d",x);
       else
       printf("%d",z);

    }
    else if(y>=x )
    {
        if(y>=z)
       printf("%d",y);
       else
       printf("%d",z);

    }
   else  if(z>=x )
    {
        if(z>=y)
       printf("%d",z);
       else
       printf("%d",y);

    }



    return 0;
}
