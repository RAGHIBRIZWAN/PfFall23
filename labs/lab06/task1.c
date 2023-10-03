/*
* Programmer = Raghib Rizwan Rabani
* Roll no: = 23K0012
* Desc: Checking if a number is perfect number or not
*/



#include <stdio.h>

void main(){
	int num = 0;
	printf("ENTER ANY NUMBER: ");
	scanf("%d",&num);	
	int j = 0;

	for(int i = 1; i<num;i++){
		if(num%i == 0){
			j += i;
			
		}
	}
	printf("%d\n",j);
	if(j == num){
		printf("It is a perfect number");
	}
	else{
		printf("It is not a perfect number");
	}
}
