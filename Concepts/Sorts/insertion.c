#include <stdio.h>

void swap(int *a , int * b){
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}


void insertion(int arr[],int size){
    int i , j ;
     for(i = 0 ; i<size; i++){
        for(j = i ; j > 0 ; j--){
            if(arr[j]<arr[j-1]){
                swap(&arr[j],&arr[j-1]);
            }
        }
     }
    
}


int main(){

    int size ; 
    printf("Enter the size of array : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter elements in array : ");
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&arr[i]);
    }

    printf("Array before sort ");
    for(int i = 0 ; i < size ; i++){
        printf("%d ",arr[i]);
    }

    insertion(arr, size);

    printf("\nArray after sort ");
    for(int i = 0 ; i < size ; i++){
        printf("%d ",arr[i]);
    }

}