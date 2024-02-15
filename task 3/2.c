#include <stdio.h>
int x,y;

void swap(int y, int x)
{
    printf("%d  %d",y ,x);

}


int main() {
    printf("Enter two numbers \n ");
    scanf("%d %d",&x,&y);
    printf("Before swaping %d  %d\n",x ,y);
    printf("After swaping ");
    swap(y,x);


    return 0;
}



