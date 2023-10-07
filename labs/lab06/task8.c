/*
* Programmer = Raghib Rizwan Rabani
* Roll no: = 23K0012
* Desc: Output numbers in reverse order.
*/

#include <stdio.h>

int main() {
    int arr[10] = {}; //declaration and initialization
    int i = 0; //declaration and initialization
    while(i<=9){
    printf("Enter the value: ");
    scanf("%d",&arr[i]);
    i++;
    } //end while
    i = 9;
    while(i >= 0){
        printf("%d\t",arr[i]);
        --i;
    } //end while
    
    return 0;
} //end main
