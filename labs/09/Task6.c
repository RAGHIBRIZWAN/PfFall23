#include <stdio.h>

int GCD(int a, int b,int max){

    if(a % max == 0  && b % max == 0){
            printf("%d ",max);
            return 0;
    }
    GCD(a,b,max-1);

}

int main(){
    int a,b,gcd=0,max,c;
    
    printf("Enter the value : ");
    scanf("%d",&a);
    printf("Enter the value : ");
    scanf("%d",&b);

    int mul = a * b;
    max = (a>b) ? a : b;

    while(1){
        if((max % a == 0 ) && (max % b == 0)){
            printf("%d",max);
            break;
        }
        ++max;
    }

    printf("\n");

    c = mul / max;

    printf("%d",c);
    return 0;

    if(a<b){max=a;}
    else{max=b;}

    GCD(a,b,max);
}
