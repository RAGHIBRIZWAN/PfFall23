#include <stdio.h>

void reverse(int *arr, int size){
    size = 10-1;
    int i;
    
    for(i = 0; i < size; i++){
        int temp = arr[size];
        arr[size] = arr[i];
        arr[i] = temp;
        size --;
    }
           
}

int main(){
    int arr[100],size;
    size = 10;
    int i;
    
    for(i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    
    
    printf("\n");
    
    reverse(arr,size);
    
    for(i = 0; i < size; i++){
        printf("%d ",arr[i]);
    };
    
    return 0;
}
