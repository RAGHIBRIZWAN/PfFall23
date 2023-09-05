#include <stdio.h>

int main() {
    int price;
    price = 0;
    scanf("%d",&price);
    int sale;
    sale = price * 0.2;
    int final;
    final = price - sale;
    printf(" %d",final);
}
