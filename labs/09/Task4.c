#include <stdio.h>

int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
    return n;
}

int main() {
    int n,temp;
    printf("Enter the number n: ");
    scanf("%d",&n);
    
    int ans = fact(n);
    printf("%d",ans);

    return 0;
}
