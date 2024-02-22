#include <stdio.h>
void enterarray(int n,int arr[]){


printf("Emter the elemnts of array :\n");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
}

void array(int n,int arr[]){

printf("unique elements : ");
        for(int i=0; i<n; i++) {
            int counter=0;

        for (int j = i-1; j>=0; j--) {
            if (arr[i] == arr[j]) {

                    counter++;

            }

        }
        if(counter==0)
{
                   printf("%d ",arr[i]);

}
    }

}



int main() {
   int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    enterarray(n,arr);
    array( n, arr);

    return 0;
}
