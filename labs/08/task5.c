/*
  Programmer: Raghib Rizwan Rabani 
  Roll No: 23K-0012
  Date: 24 oct 2023
  Desc:In this C program, you are tasked with creating a function
called decideCarUsage that helps users decide whether they should use their car
on a particular day of the week. Users provide the numeric part of their car's
number and the day of the week (1 to 7). The program applies a simple rule:
even-numbered cars should be used on even days, and odd-numbered cars on odd
days. The function returns 1 if the car should be used and 0 if it should not.
    */

#include <stdio.h>
int decidecarusage(int a, int b){
    if(a%2 == b%2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int carnum,daynum;
    printf("Enter number of car: ");
    scanf("%d",&carnum);
    printf("Enter number of day: ");
    scanf("%d",&daynum);
    
    int ans = decidecarusage(carnum,daynum);
    
    if(ans == 1){
        printf("Car should be used");
    }
    else{
        printf("Car should not be used");
    }
    
    return 0;
}
