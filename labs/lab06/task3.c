/*
* Programmer = Raghib Rizwan Rabani
* Roll no: = 23K0012
* Desc: Checking if a number is perfect number or not
*/

#include <stdio.h>

void main(){
	int a = 0;
	int b = 0;
	int i;
	int gcd = 1;

	printf("Enter 1st number: ");
	scanf("%d",&a);

	printf("Enter 2nd number: ");
	scanf("%d",&b);
	
	

	for(i = 2;i<=a && i<=b;++i){
		if(a%i == 0 && b&i == 0){
			gcd = i;
		}
	}
	printf("gcd is : &d",gcd);

	int lcm = (a * b)/gcd;

	printf("%d",lcm);
	
}
