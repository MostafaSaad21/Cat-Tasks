#include <stdio.h>
#include <string.h>
int main()
{
 char x[100],y[100];
 gets(x);
 for(int i=0; i<= strlen(x); i++)
 {
    y[strlen(x)-i-1]=x[i];
 y[strlen(x)]="\0";
}
 printf("%s",y);

    return 0;
}
