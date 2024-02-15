#include <stdio.h>

int Get_Max(int x, int y)
{
    int max;
    if (x>y)
        max=x;
    else
        max=y;
    return max;
}


int main() {
    printf("Enter 2 numbers\n");
    int x, y;
    scanf("%d %d",&x ,&y);
    int max=Get_Max(x,y);
    printf("%d",max);
    return 0;
}




