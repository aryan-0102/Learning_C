#include <stdio.h>

void merge(int arr[], int lb, int mid, int ub) {
    int i = lb, j = mid + 1, k = 0;
    int temp[ub - lb + 1];

    while (i <= mid && j <= ub) {
        if (arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= ub) {
        temp[k++] = arr[j++];
    }

    for (int i = lb; i <= ub; i++) {
        arr[i] = temp[i - lb];
    }
}

void mergesort(int arr[], int lb, int ub) {
    if (ub > lb) {
        int mid = (lb + ub) / 2;
        mergesort(arr, lb, mid);
        mergesort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

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

    mergesort(arr, 0, size - 1);

    printf("\nArray after sort: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
