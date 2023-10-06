#include <stdio.h>

int main() {
    int i = 0;
    
    while(i<=6){
        if(i%2 == 0){
            printf("%d\t%d\t%d\t%d\t",i,i,i,i);
            
        }
        else{
            printf("\t%d\t%d\t",i,i);
        }
        i++;
        printf("\n");
    }
    

    return 0;
}
