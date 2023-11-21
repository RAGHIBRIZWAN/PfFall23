#include <stdio.h>
#include <string.h>

struct registers{
    int course_id;
    char course_name[20];
};
struct student{
    int stu_id;
    char fname[20];
    char lname[20];
    char email[50];
    int cellno;
    struct registers reg[50];
};

int main() {
    struct student data[50];
    
    for(int i = 0; i < 5; i++){
        printf("Enter student id: ");
        scanf("%d",&data[i].stu_id);
        printf("Enter first name: ");
        scanf("%s",&data[i].fname);
        printf("Enter last name: ");
        scanf("%s",&data[i].lname);
        printf("Enter student email: ");
        scanf("%s",&data[i].email);
        printf("Enter student cell number: ");
        scanf("%d",&data[i].cellno);
        printf("Enter course id: ");
        scanf("%d",&data[i].reg[i].course_id);
        printf("Enter course name: ");
        scanf("%s",&data[i].reg[i].course_name);
    }
    
    printf("\n");
    
    for(int i = 0; i < 5; i++){
        printf("Data of student %d\n",i+1);
        printf("%d\n",data[i].stu_id);
        printf("%s\n",data[i].fname);
        printf("%s\n",data[i].lname);
        printf("%s\n",data[i].email);
        printf("%d\n",data[i].cellno);
        printf("%d\n",data[i].reg[i].course_id);
        printf("%s\n",data[i].reg[i].course_name);
    }
    
   
    return 0;
}
