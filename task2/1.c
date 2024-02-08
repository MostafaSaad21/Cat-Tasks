#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the working hours\n");
    int h, salary;
    scanf("%d",&h);
    if(h<40)
       salary=50*.9*h;
       else
       salary=50*h;
    printf("salary is : %d",salary);
    return 0;
}