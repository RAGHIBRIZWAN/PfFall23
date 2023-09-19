#include <stdio.h>

void main() {
    
	int a=0;
	int b=0;

	printf("ENTER 4 DIGIT NUMBER IN 0s AND 1s: ");
	scanf("%04d",&a);

	printf("ENTER 4 DIGIT NUMBER IN 0s AND 1s: ");
	scanf("%04d",&b);
	
	printf("%04d",a);
	printf("%04d\n",b);
	
	int m = a;
	int n =b;
	
	printf("%04d",n);
	printf("%04d",m);
}
