#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Enter an amount:\n");
    scanf("%f",&x);
    printf("With tax added :%.2f",(x+0.05*x));
    return 0;
}
