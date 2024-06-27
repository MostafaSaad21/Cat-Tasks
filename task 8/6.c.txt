#include <stdio.h>
int main() {
    int n,odd=0,even=0;
    printf("Enter size of array:\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elments of array: \n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
            even++;
        else
            odd++;

    }
    printf("even is : %d",even);
    printf("\n odd is : %d",odd);

    return 0;
}
