#include <stdio.h>

void 

int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements in array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array before sort: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    quick(arr,size);

    printf("\nArray after sort: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
