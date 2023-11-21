// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
struct date{
    int day;
    int month;
    int year;
}var1;

// void engine(struct car eng[],char start[10],char end[10],int n){
//     for(int i = 0; i < n; i++){
//         if(strcmp(eng[i].serial,start) >= 0 && strcmp(eng[i].serial, end) <= 0)){
//             printf("Year is %d, materal is %s, quantity is %d ",eng[i].year,eng[i].material,eng[i].quantity);
           
//         }
//     }
// }

int main() {
    struct date d[50];
    int day,month,year,n;
    
    printf("Enter value of n:");
    scanf("%d",&n);
    
    printf("enter date: ");
    scanf("%d",&day);
    printf("enter month: ");
    scanf("%d",&month);
    printf("enter year: ");
    scanf("%d",&year);
    
    for(int i = 0; i < n; i++){
        printf("Enter date: ");
        scanf("%d",&d[i].day);
        printf("Enter month: ");
        scanf("%d",&d[i].month);
        printf("Enter year: ");
        scanf("%d",&d[i].year);
    }
    // engine(eng,start,end,n);
    for(int i = 0; i < n; i++){
        if(d[i].day == day && d[i].month == month && d[i].year == year){
            printf("day %d , month %d, year %d are equal\n",day,month,year);
        }
    }
    
    return 0;
}
