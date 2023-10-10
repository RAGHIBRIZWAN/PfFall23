/*
* Programmer = Raghib Rizwan Rabani
* Roll no: = 23K0012
* Desc: To rotate Array  left by d position.
*/

#include <stdio.h>

int main(){
	int a = 0;
	int b = 0;
	int c = 0;

	printf("ENTER FIRST NUMBER: ");
	scanf("%d",&a);

	printf("ENTER SECOND NUMBER: ");
	scanf("%d",&b);

	while(a>0){
		a = a - b;
		c = c + 1;
	}
	printf("%d",c);	
}
