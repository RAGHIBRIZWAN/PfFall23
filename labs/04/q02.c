#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int sum = 0;
    int i = 0;
    while(i<n){
        i = i+1;
        int num;
        printf("Enter an integer: ");
        scanf("%d", &num);
        sum+= num * num;
    }

    printf("The sum of the squares is: %d\n", sum);

    return 0;
}
