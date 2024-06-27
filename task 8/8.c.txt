#include <stdio.h>

void MinAndMax(int *arr, int size, int *min, int *max) {
    *min = *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);

    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &arr[i]);
    }

    int min, max;

    MinAndMax(arr, size, &min, &max);

    printf("Minimum element in the array: %d\n", min);
    printf("Maximum element in the array: %d\n", max);

    return 0;
}
