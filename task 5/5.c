#include <stdio.h>


    int main() {
int x ,y ,z;
int *px , *py , *pz;
x=10;
y=20;
z=30;
px =&x;
py=&y;
pz=&z;

printf("%d  %d  %d  %d  %d  %d  %d  %d  %d  ",x,y,z,px,py,pz,*px,*py,*pz);
printf("\n Swapping pointers \n");
        pz = px;
        px = py;
        py = pz;
        printf("%d  %d  %d  %d  %d  %d  %d  %d  %d  ",x,y,z,px,py,pz,*px,*py,*pz);

        return 0;
    }
