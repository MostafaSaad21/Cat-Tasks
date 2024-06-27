#include <stdio.h>
int main() {
   int n,p,result=1;
   printf("Enter the number : ");
   scanf("%d",&n);
    printf("Enter a power : ");
    scanf("%d",&p);
while(p>0)
{
result*=n;
p--;
}
printf("%d",result);
    return 0;
}
