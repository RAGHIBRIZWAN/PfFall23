
#include <stdio.h>
#include <strings.h>

struct school{
        int rollno;
        char name[100];
        char department[20];
        char course[50];
        int year;
    }sch;

void namebyyear(struct school stud[],int n,int gyear){
    printf("Name of students are: ");
    for(int i = 0; i < n; i++){
        if(stud[i].year == gyear){
            printf("%s\n",stud[i].name);
        }
    }
}

void namebyroll(struct school stud[],int n,int groll){
    printf("Name of students are: ");
    for(int i = 0; i < n; i++){
        if(stud[i].rollno == groll){
            printf("%s\n",stud[i].name);
        }
    }
}
    
int main() {
    struct school stud[450];
    int n,gyear,groll;
    printf("Enter number of students: ");
    scanf("%d",&n);
    printf("Enter year: ");
    scanf("%d",&gyear);
    printf("Enter Rollno: ");
    scanf("%d",&groll);
    for(int i = 0; i < n; i++){
        printf("Enter the name of student: ");
        scanf("%s",&stud[i].name);
        printf("Enter the rollno of student: ");
        scanf("%d",&stud[i].rollno);
        printf("Enter the department of student: ");
        scanf("%s",&stud[i].department);
        printf("Enter the course of student: ");
        scanf("%s",&stud[i].course);
        printf("Enter the year of student: ");
        scanf("%d",&stud[i].year);
    }
    
    namebyroll(stud,n,groll);
    namebyyear(stud,n,gyear);
    
    return 0;
}
