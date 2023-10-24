/*
  Programmer: Raghib Rizwan Rabani 
  Roll No: 23K-0012
  Date: 24 oct 2023
  Desc:Create a C program that swaps the values of two integers using a user-defined
function, swapIntegers. The user inputs two integer values, and the program
uses the function to swap them. It should perform the swap, and display the
updated values.
*/

#include <stdio.h>

int swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
    int num1,num2;

    printf("Enter any number: ");
    scanf("%d",&num1);
    printf("Enter any number: ");
    scanf("%d",&num2);

    swap(&num1,&num2);

    printf("num1 is: %d",num1);
    printf("\n");
    printf("num2 is: %d",num2);

}
