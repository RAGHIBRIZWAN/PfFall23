#include <stdio.h>

int main() {
    int arr[10] = {};
    int i = 0;
    int a = 0;
    while(i<=9){
    printf("Enter the value:");
    scanf("%d",&arr[i]);
    a += arr[i];
    i++;
    }
    printf("The sum of the value is: %d",a);
    
    return 0;
}
