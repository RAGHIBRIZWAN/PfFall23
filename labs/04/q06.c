#include <stdio.h>

void main() {
    int i=0;
    int j=1;
    int k=0;
    int l=3;
    int m=1;
    int n=1;
    printf("ENTER VALUE OF L: ");
    scanf("%d",&l);
    m=l;
    n=l;
    l=l*2-1;
    
        for(i=1;i<=l;i++){
            for(j=1;j<=l;j++){   
        
                if(j == m || j == n){
                    printf("*");
                 }
                else{
                    printf(" ");
                }
            }
            if(i>=4){
                m = m+1;
                n = n-1;
            }
            else{
                m = m-1;
                n = n+1;
            }
        printf("\n");
        }
}
