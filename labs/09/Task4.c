/*
Programmer: Raghib Rizwan Rabani
Roll No: 23K-0012
Date: 31/10/2023
Desc: Finding factorial using recursion.
*/


#include <stdio.h>

int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
    return n;
}

int main() {
    int n,temp;
    printf("Enter the number n: ");
    scanf("%d",&n);
    
    int ans = fact(n);
    printf("%d",ans);

    return 0;
}
