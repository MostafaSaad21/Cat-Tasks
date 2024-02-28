#include <stdio.h>
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i <size-1; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {

             int   swap= arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
       }
}

    int main() {

         int arr[6] = {5, 7, 9, 2, 4, 3};
        printf("Before: ");
         for(int i = 0; i < 6; i++)
             printf(" %d ", arr[i]);
int size =sizeof arr/sizeof arr[0];
         bubbleSort(arr, 6);
        printf("\nAfter: ");
         for(int i = 0; i < 6; i++)
             printf(" %d", arr[i]);
        return 0;
    }
