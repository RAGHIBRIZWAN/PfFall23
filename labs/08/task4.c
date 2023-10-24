/*
  Programmer: Raghib Rizwan Rabani 
  Roll No: 23K-0012
  Date: 24 oct 2023
  Desc:
Your task is to create a C program that performs password length
validation and user authentication based on the given requirements below:


a)    
Prompts the user to enter a password.


b)    
Validates the entered password by checking if it is
at least 8 characters long.


c)    
If the password meets the length requirement, the
program should compare it to a stored password "Secure123."


d)    
If the
entered password matches the stored password, display "Login successful.
Welcome!" Otherwise, display "Login failed. Incorrect password."

*/

#include <stdio.h>
#include <string.h>

int main(){
    char arr[100];
    printf("Enter the password: ");
    scanf("%s",arr);
    
    char brr[100] = {"Secure123"};
    
    int value = strlen(arr);
    
    int ret = strcmp(brr,arr);
    
    if(value >= 8){
        if(ret == 0){
            printf("Login Successful!");
        }
        else{
        printf("Login failed");
            
        }
    }
    else{
        printf("Password is too short.");
    }
}
