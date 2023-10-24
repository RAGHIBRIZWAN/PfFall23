/*
  Programmer: Raghib Rizwan Rabani 
  Roll No: 23K-0012
  Date: 24 oct 2023
  Desc:You are given an array of integers. Write a C program that
defines a user-defined function processArray to calculate the sum, maximum, and
minimum values in the array. The program should take the array and its size as
parameters and use the function to compute these values.


Input:Array is [4, 8, 1, 15, 6]


Output:


Array Sum:
34


Maximum
Value: 15


Minimum Value: 1

    */

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
