
#include <stdio.h>

struct data{
        char name[15];
        int salary;
        int hours;
    
}var1;

int main() {
    struct data emp[10];
    
    for(int i = 0; i < 10; i++){
        printf("Enter the name: ");
        scanf("%s",&emp[i].name);
        printf("Enter the salary: ");
        scanf("%d",&emp[i].salary);
        printf("Enter the hours: ");
        scanf("%d",&emp[i].hours);
    }
    
    for(int i = 0; i < 10; i++){
        if(emp[i].hours == 8){
            emp[i].salary = emp[i].salary + 50;
        }
        else if(emp[i].hours == 10 || emp[i].hours == 11){
            emp[i].salary = emp[i].salary + 100;
        }
        else if(emp[i].hours > 12){
            emp[i].salary = emp[i].salary + 150;
        }
    }
    
    for(int i = 0; i < 10; i++){
        printf("Salary will become: %d\n",emp[i].salary);
    }

    return 0;
}
