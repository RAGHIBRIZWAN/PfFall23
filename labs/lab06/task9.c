#include<stdio.h>

int main() {
    int arr[10] = {};
    int i = 0; //initialization and declaration
    int a = 0; //initialization and declaration
    while(i<=9){
    printf("Enter the value:");
    scanf("%d",&arr[i]);
    a += arr[i];
    i++;
    } //end while

    int n = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0]; //initialization and declaration
    int max = arr[0]; //initialization and declaration

    // Find the minimum and maximum in the array
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    } //end for

    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);

    return 0;
} // end main
