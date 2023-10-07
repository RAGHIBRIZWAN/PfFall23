/*
* Programmer = Raghib Rizwan Rabani
* Roll no: = 23K0012
* Desc: Fibonacci series
*/



#include <stdio.h>

void main(){

	int a = 0;
	int b = 1;
	int sum = a + b;
	int sum2 = 0;

	for(int i = 0;b<=10000;i++){
		a = b;
		b = sum;
		sum = a + b;
		printf("%d, ",a);

		if(a%3 == 0 || a%5 == 0 || a%7 == 0){
			sum2 += a;
			
		}
	}
	printf("The sum of numbers divisible by are: %d",sum2);
}
