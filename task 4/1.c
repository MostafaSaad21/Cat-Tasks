#include <stdio.h>
void enterarray(int n,int arr[]){


printf("Emter the elemnts of array :\n");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

}
void array(int n,int num,int arr[]){
  
if(num==0)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
               int temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }

        }


    }



}
   else if(num==1)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]<arr[j])
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }

            }


        }

    }


}
void printarray(int n, int arr[])
{
    for(int i=0 ;i<n; i++)
        printf("%d  ",arr[i]);

}


int main() {
   int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    enterarray(n,arr);
    int num;
    printf("Enter 0 for ascending or Enter 1 for descending :\n");
    scanf("%d",&num);
    array( n, num, arr);
    printarray( n,  arr);
    return 0;
}
