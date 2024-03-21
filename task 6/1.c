#include <stdio.h>
#include <string.h>
int main()
{
    char x[100];
    gets(x);
    for(int i=0; i< strlen(x); i++)
    {
        if(x[i]>=97&&x[i]<=122 )
            x[i]=x[i]-32;
    }
    printf("%s",x);
    return 0;
}
