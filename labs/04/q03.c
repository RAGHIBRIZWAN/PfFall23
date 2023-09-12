/*
* Programmer: Raghib Rizwan Rabani
*Roll no: 23K0012
* Date: 12/09/2023
*/


#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int i = 0;
    
    while(i<n) {
        i = i+1;
        int j = 0;
        while (j<n)  {
            j = j+1;
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
