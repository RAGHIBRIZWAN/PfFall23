

#include <stdio.h>
#include <math.h>

int main() {
    int y1 = 0;
    printf("WHAT IS YOUR BORN YEAR?:");
    scanf("%d",&y1);
    int m1 =0;
    printf("WHAT IS YOUR BORN MONTH?:");
    scanf("%d",&m1);
    int d1 = 0;
    printf("WHAT IS YOUR BORN DATE?:");
    scanf("%d",&d1);
    int y2 = 0;
    printf("WHAT IS YOUR BORN YEAR?:");
    scanf("%d",&y2);
    int m2 =0;
    printf("WHAT IS YOUR BORN MONTH?");
    scanf("%d",&m2);
    int d2 = 0;
    printf("WHAT IS YOUR BORN DATE?:");
    scanf("%d",&d2);
    
    if(y1<y2){
        printf("First person is older");
    }
    else if(y1>y2){
        printf("Second person is older");
    }
    else if(m1<m2){
        printf("First person is older");
    }
    else if(m1>m2){
        printf("Second person is older");
    }
    else if(d1<d2){
        printf("Firse person is older");
    }
    else if(d1>d2){
        printf("Second person is older");
    }
    else{
        printf("ERROR");
    }
}
