#include <stdio.h>
#include <string.h>

struct date{
    int day;
    int month;
    int year;
};


int main() {
    struct date d[50];
    
    d[0].day = 21;
    d[0].month = 11;
    d[0].year = 2023;
    
    d[0].day += 45;
    
    while(d[0].day > 30){
        d[0].day -= 30;
        d[0].month++;
    }
    
    if(d[0].month > 12){
        d[0].month = 1;
        d[0].year++;
    }
    
    printf("Final Date is: %d %d %d",d[0].day,d[0].month,d[0].year);
    
    return 0;
}
