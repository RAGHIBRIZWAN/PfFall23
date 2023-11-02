/*
Programmer: Raghib Rizwan Rabani
Roll No: 23K-0012
Date: 31/10/2023
Desc: Finding n fibonacci numbers using recursion.
*/

#include <stdio.h>

int fib(int a, int b, int sum, int n){
        if(n>0){
        a=b;
        b=sum;
        sum=a+b;
        printf("%d  ",sum);
        fib(a,b,sum,n-1);
    }
    else{
        return 0;
    }
}

int main() {
    int n,a=0,b=0,sum=1;
    printf("Enter the vakue of n: ");
    scanf("%d",&n);
    printf("%d",sum); 
    fib(a,b,sum,n);

    return 0;
}
