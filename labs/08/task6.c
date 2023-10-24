#include <stdio.h>

int processArray(int brr[],int n){
    brr[n];
    int sum=0;
    int min = brr[0];
    int max = brr[0];
    for(int i = 0; i < n; i++){
        sum += brr[i];
    }
    for(int i = 0; i < n; i++){
        if(min > brr[i]){
            min = brr[i];
        }
        else if(max < brr[i]){
            max = brr[i];
        }
    }
    printf("%d\n",sum);
    printf("%d\n",min);
    printf("%d",max);
}

int main(){
    int size,sum,min,max;
    int arr[100];
    printf("Enter the size of Array: ");
    scanf("%d",&size);
    
    for(int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    
    processArray(arr,size);
}
