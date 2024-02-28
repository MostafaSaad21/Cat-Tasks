#include <stdio.h>
int scaler(int arr1[],int arr2[],int size)
{
    int scal =0;
    for(int i=0; i<size; i++)
    {
        scal=scal+arr1[i]*arr2[i];
    }
  return scal;

}

    int main() {

    int arr1[]={1,2,3,4,5};
        int arr2[]={6,7,8,9,10};
        int size=sizeof arr1/sizeof arr1[0];
        printf("%d",scaler(arr1,arr2,size));

        return 0;
    }
