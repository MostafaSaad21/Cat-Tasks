
#include <stdio.h>
int maximum(int x, int y, int z, int m)
{
    int max=x;

    if(max<y)
        max=y;
    if(max<z)
        max=z;
    if(max<m)
        max=m;

    return max;

}
int minimum(int x, int y, int z, int m)
{
    int min=x;

    if(min>y)
        min=y;
    if(min>z)
        min=z;
    if(min>m)
        min=m;

    return min;

}



int main() {
    int x,y,z,m;
    printf("Enter four numbers:\n");
    scanf("%d%d%d%d",&x,&y,&z,&m);

    maximum (x,y,z,m);
    minimum(x,y,z,m);

    printf("maximum is: %d \n", maximum(x,y,z,m));
    printf("minimum is: %d", minimum(x,y,z,m));

    return 0;
}
