#include <stdio.h>
#include <string.h>
int main()
{
 char x[100];
 gets(x);
 int count=0;
 for(int i=0; i< strlen(x); i++)
{
     if( x[i]>=32 &&x[i]<=127  )
        count++;
}
 printf("%d\n",count);
    return 0;
}
