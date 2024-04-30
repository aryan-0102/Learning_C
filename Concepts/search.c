#include <stdio.h>
int size ; int index ;
void linear_search(int array[]){
    int key ;
    int flag = -1;
    printf("Enter number to search : ");
    scanf("%d",&key);
    for(int i=0;i<size;i++){
        if(array[i] == key){
            flag = 1;
            index = i;
        }
    }
    if(flag !=-1){
        printf("%d  found at index %d",key,index);
    }
}

void binary_search(int array[]){
    int key ;
    int flag =-1;
    int low = 0;
    int high = size-1 ;
    printf("Enter number to search : ");
    scanf("%d",&key);
    
    while(high>=low){
        int mid = (low + high)/2;
        if(array[mid]== key){
            flag = 1;
            index = mid ;
            break;
        }

        else if(array[mid]<key){
            low = mid +1 ;
        }

        else{
            high = mid -1 ;
        }
    }

    if(flag !=-1){
        printf("%d  found at index %d",key,index);
    }
}


int main(){
    printf("Enter array size : ");
    scanf("%d",&size);
    int array[size];

    for(int i = 0 ;i<size;i++)
    {
        printf("Enter data a[%d]",i);
        scanf("%d",&array[i]);
    }


    binary_search(array);

    return 0 ;
}
