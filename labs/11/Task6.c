// Online C compiler to run C program online
#include <stdio.h>

struct size{
    int height;
    int length;
    int width;
};

int main() {
    struct size s[10];
    int width = 100000;
    int height = 41;
    int length = 100000;
    
    printf("Enter the width: ");
    scanf("%d",&s[0].width);
    printf("Enter the length: ");
    scanf("%d",&s[0].length);
    printf("Enter the height: ");
    scanf("%d",&s[0].height);
    
    int v = s[0].length*s[0].width*s[0].height;
    
    if(s[0].height < height){
        printf("The volume is: %d",v);
    }
    else{
        printf("Impossible");
    }

    return 0;
}
