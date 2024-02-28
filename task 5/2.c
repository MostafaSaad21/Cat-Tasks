#include <stdio.h>

int sum(int *x,int *y)
{
    return *x + *y;
}



int main() {
    printf("Enter 2 numbers: \n");
int x, y;
scanf("%d%d",&x,&y);
printf("sum is : %d",sum(&x,&y));

    return 0;
}
