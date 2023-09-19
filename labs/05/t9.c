#include <stdio.h>
#include <math.h>

void main() {
    int a =0;
    int b =0;
    int c=0;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
   int sqrt1 = (b*b - 4*a*c);
    printf("%d\n",sqrt1);
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
