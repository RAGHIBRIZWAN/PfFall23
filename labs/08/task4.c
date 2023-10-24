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
