#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter 10 numbers\n");
    int x, sum=0, avg=0;
    for(int i=1; i<=10; i++)
    {
            scanf("%d",&x);
        sum=sum+ x;
    }
    avg=sum/10;
printf("sum = %d \n avg = %d",sum ,avg);




    return 0;
}