/*
* Programmer = Raghib Rizwan Rabani
* Roll no: = 23K0012
* Desc: Sum of numbers in Array.
*/

#include <stdio.h>

int main() {
    int arr[10] = {}; //declaration and initialization
    int i = 0; //declaration and initialization
    int a = 0; //declaration and initialization
    while(i<=9){
    printf("Enter the value:");
    scanf("%d",&arr[i]);
    a += arr[i];
    i++;
    } //end while
    printf("The sum of the value is: %d",a);
    
    return 0;
} //end main
