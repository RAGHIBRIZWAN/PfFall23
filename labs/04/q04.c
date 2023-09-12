/*
* Programmer: Raghib Rizwan Rabani
*Roll no: 23K0012
* Date: 12/09/2023
*/

#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;
    a=0;
    b=0;
    c=0;
    printf("ENTER VALUE OF a:");
    scanf("%d",&a);
    printf("ENTER VALUE OF b:");
    scanf("%d",&b);
    printf("ENTER VALUE OF c:");
    scanf("%d",&c);
    int sqrt1 = (b*b - 4*a*c);
    if(sqrt1 > 0){
        float r1 = (-b + sqrt(sqrt1)) / (2 * a);
        float r2 = (-b - sqrt(sqrt1)) / (2 * a);
          printf("%f",r1);
          printf("%f\n",r2);
    }
  
    else if(sqrt1 == 0){
        float r1 = (-b / (2 * a));
        printf("%f",r1);
    }
    else if (sqrt1 < 0){
        printf("Negative Number in square root");
    }
   else{
       printf("ERROR");
   }
   
}
