/* 
Programmer: Raghib Rizwan Rabani
Roll No: 23k-0012
Date: 3-oct-2023 
Description: multiplication of 2x2 matrix
*/

#include <stdio.h>

int main() {
    int arr[10] = {0};
    int size = 0;
    int a = 0;
    int i = 0;
    int j = 0;
    int temp;
    
    printf("Enter size of Array: ");
    scanf("%d",&size);
    
    for(i=0; i<size; i++){
		printf("Enter an integer in array");
		scanf("%d",&arr[i]);
	}
    
    for(i = 0; i < size; i++){
        for(j = i+1; j < size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i = 0; i < size; i++){
        printf("%d",arr[i]);
    }

    return 0;
}
