#include <stdio.h>

int mult(int temp,int a, int b){
    if(b == 0){
        return temp;
    }
    else{
        temp += a;
        b--;
        mult(temp,a,b);
    }
}

int main(){
    int a,b,temp = 0;
    
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    
    int mul = mult(temp,a,b);
    printf("%d",mul);
    
    return 0;
}
