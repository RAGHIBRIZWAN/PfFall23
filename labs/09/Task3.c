#include <stdio.h>
#include <stdlib.h>
int main(){
 
    int arr[100] = {1,2,3,4,5};
    char brr[100] = {'a','b','c','d','e'};
    long long int crr[100] = {10,9,8,7,6};   
    
    int *a = arr;
    char *b = brr;
    long long int *c = crr;
    int size;
    
    printf("Enter the size of Array: ");
    scanf("%d",&size);
    
    for(int i = 0; i < size; i++){
        printf("L:%p R:%d ",&arr[i],*(a+i));    
    }
    printf("\n");
    
    for(int i = 0; i < size; i++){
        printf("L:%p R:%c ",&brr[i],*(b+i));    
    }
    printf("\n");
    
    for(int i = 0; i < size; i++){
        printf("L:%p R:%d ",&crr[i],*(c+i));    
    }
    
    return 0;
}
