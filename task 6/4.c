#include <stdio.h>
#include <string.h>
int main()
{
    char s;
 char x[100];
 gets(x);
 printf("Input character to search:\n");
 scanf("%c",&s);
 int i;
 for(i=0; i< strlen(x); i++) {
     if (x[i] == s) {
 break;

     }
 }
    printf(" %c is found at index: %d",s, i);


    return 0;
}
