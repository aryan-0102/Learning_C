#include <stdio.h>

void swap(int *a , int * b){
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}


void selection(int arr[],int size){
    int j ;
    for(int i =0; i<size;i++){
        int min = i;
        for(j = i+1 ; j < size ; j++){
            if(arr[j]<arr[min]){
                min = j ;
            }
            
        }
        if(min != i){
        swap(&arr[i],&arr[min]);
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

    selection(arr, size);

    printf("\nArray after sort ");
    for(int i = 0 ; i < size ; i++){
        printf("%d ",arr[i]);
    }

}