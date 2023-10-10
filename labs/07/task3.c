/*
/* Programmer = Raghib Rizwan Rabani
* Roll no: = 23K0012
* Desc: To sum the value of input.
*/

#include <stdio.h>

int main(){
	int a = 0;
	printf("Enter the value: ");
	scanf("%d",&a);

	int i;
	int c=0;

	for(i = 0; a>0 ; i++){
		
		c += a%10;		
		a = a/10;
			
	}
	printf("%d",c);
}
