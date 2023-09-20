#include <stdio.h>

void main() {
    int num = 0;
    printf("ENTER 8 NUMBERS IN 0s AND 1s: ");
    scanf("%d",&num);
    int a =0;
    a = num%10000;
    printf("%04d",a);
    
    int b =0;
    b = num/10000;
    printf("%04d",b);
    
}
