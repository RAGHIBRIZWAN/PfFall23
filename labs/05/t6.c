#include <stdio.h>

void main() {
    int num, bit7, bit4;
    printf("ENTER 8 NUMBERS IN 0s AND 1s: ");
    scanf("%d",&num);
    
    bit4= (num / 1000) % 10;
    bit7 = (num / 1000000) % 10;
    
    if (bit4 && bit7) {
        num = num - 1000000 - 1000;
    }
    
    
    printf("%08d\n", num);
}
