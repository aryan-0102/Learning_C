//Binary seasrch algorithm 

#include <stdio.h>

int main(){
    int i,key,array[10];

printf("Enter values in Array : ");

for(i=0;i<10;i++){
    printf("\nEnter a[%d]",i);
    scanf("%d",&array[i]);
}

printf("Enter Element to be searched : ");
scanf("%d",&key);

int found = 0;
for(i=0;i<10;i++){
    if(array[i]==key){
        found=1;
        break;
    } 
}

if(found == 1){
    printf("Key Found at index %d",i);

}
else{
    printf("Element not found in array");
}
}