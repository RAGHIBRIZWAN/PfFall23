#include <stdio.h>

void main() {
        int a = 0;
        printf("Enter valur from 0-1000: ");
        scanf("%d", &a);
        if(a > 500){
            printf("HIGH BRIGHTNESS");
        }
        else if(a >=0 && a<=100){
            printf("It is evening time so moderate brightness");
        }
        else if(a >= 101 && a<= 500){
            printf("Lighting Low Brightness");
        }
        else{
            printf("ERROR");
        }
}
