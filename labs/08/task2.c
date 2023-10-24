#include <stdio.h>

int arth(int a,char opr,int b){
    int ans = 0;
    switch(opr){
        case '+':
            ans = a + b;
            break;
        case '-':
            ans = a - b;
            break;
        case '*':
            ans = a * b;
            break;
        case '/':
            ans = a / b;
            break;
        default:
            break;
    }
    return ans;
}

int main() {
    int num1,num2;
    char opr;
    int ans;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter operator: ");
    scanf(" %c",&opr);
    printf("Enter num2: ");
    scanf("%d",&num2);
    
    ans = arth(num1,opr,num2);
    
    printf("%d", ans);
    return 0;
}
