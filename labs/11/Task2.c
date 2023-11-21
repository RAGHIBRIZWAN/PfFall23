
#include <stdio.h>
#include <string.h>
struct car{
    char serial[10];
    int year;
    char material[20];
    int quantity;
}var1;

int main() {
    struct car eng[100];
    char start[10] = "BB1";
    char end[10] = "CC6";
    int n;
    printf("enter value of n: ");
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++){
        printf("Enter serial number: ");
        scanf("%s",&eng[i].serial);
        printf("Enter year: ");
        scanf("%d",&eng[i].year);
        printf("Enter material: ");
        scanf("%s",&eng[i].material);
        printf("Enter quantity: ");
        scanf("%d",&eng[i].quantity);
    }
    // engine(eng,start,end,n);
    for(int i = 0; i < n; i++){
        if(strcmp(eng[i].serial,start) >= 0 && strcmp(eng[i].serial, end) <= 0){
            printf("Year is %d, materal is %s, quantity is %d ",eng[i].year,eng[i].material,eng[i].quantity);
           
        }
    }
    
    return 0;
}
