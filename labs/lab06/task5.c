/*
* Programmer = Raghib Rizwan Rabani
* Roll no: = 23K0012
* Desc: number pattern
*/

#include <stdio.h>

int main() {
    int i = 0; //initialization and declaration
    
    while(i<=6){
        if(i%2 == 0){
            printf("%d\t%d\t%d\t%d\t",i,i,i,i);
            
        }
        else{
            printf("\t%d\t%d\t",i,i);
        }
        i++;
        printf("\n");
    } //end while
    

    return 0;
} //end main
