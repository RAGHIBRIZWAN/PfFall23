
#include <stdio.h>
#include <string.h>

struct emp{
    int emp_id;
    char emp_name[20];
    int emp_sal;
};
struct org{
    int size;
    char org_name[20];
    char org_number[20];
    struct emp data[50];
};


int main() {
    struct org d[50];
    
    d[0].size = 123;
    strcpy(d[0].org_name, "NU-FAST");
    strcpy(d[0].org_number, "NUFAST123ABC");
    d[0].data[0].emp_id = 127;
    strcpy(d[0].data[0].emp_name, "Linus Sebastian");
    d[0].data[0].emp_sal = 400000;
    
    printf("The size of structure organization: %d\n Organization name: %s\n Organization number: %s\n Employee id: %d\n Employee name: %s\n Employee salary: %d",d[0].size,d[0].org_name,d[0].org_number,d[0].data[0].emp_id,d[0].data[0].emp_name,d[0].data[0].emp_sal);
    
    return 0;
}
