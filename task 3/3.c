#include <stdio.h>
int count =0;
void func(int x)
{
    while(x!=0)
    {
   x= x /10;
  count++;
    }
printf("%d",count);
}


int main() {
    printf("Enter the number\n");
    int x;
    scanf("%d",&x);
  func(x);
    return 0;
}
