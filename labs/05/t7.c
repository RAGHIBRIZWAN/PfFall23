#include <stdio.h>

void main() {
    int ap = 0;
    int dp = 0;
    int sp = 0;
    printf("Enter Total Price: ");
    scanf("%d",&ap);
    if(ap>=2000 && ap<= 4000){
        dp = "20%";
        dp= ap * 0.2;
        sp = ap - dp; 
        printf("TOTAL PRICE: %d\n",ap);
        printf("SALE PRICE: %d\n",sp);
        printf("DISCOUNTED PRICE: %d\n",dp);
    }
    else if(ap>=4001 && ap<=6000){
        dp = "30%";
        dp = ap * 0.3;
        sp = ap - dp;
        printf("TOTAL PRICE: %d\n",ap);
        printf("SALE PRICE: %d\n",sp);
        printf("DISCOUNTED PRICE: %d\n",dp);
    }
        else if(ap>6000){
        dp = "50%";
        dp = ap * 0.5;
        sp = ap - dp;
        printf("TOTAL PRICE: %d\n",ap);
        printf("SALE PRICE: %d\n",sp);
        printf("DISCOUNTED PRICE: %d\n",dp);
    }
}
