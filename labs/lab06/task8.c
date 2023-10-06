#include <stdio.h>

int main() {
    int arr[10] = {};
    int i = 0;
    while(i<=9){
    printf("Enter the value: ");
    scanf("%d",&arr[i]);
    i++;
    }
    i = 9;
    while(i >= 0){
        printf("%d\t",arr[i]);
        --i;
    }
    
    return 0;
}
