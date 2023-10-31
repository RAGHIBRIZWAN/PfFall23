/*
Programmer: Raghib Rizwan Rabani
Roll No: 23K-0012
Date: 31/10/2023
Desc: Modify the function swap and its call.
*/

// Part A: Addresses of j and k are not passed and function does not contain pointer variables.

#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int j=2,k=5;
    printf("j = %d , k = %d\n",j,k);
    swap(&j,&k);
    printf("j = %d , k = %d",j,k);

    return 0;
}
