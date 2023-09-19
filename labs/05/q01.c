#include <stdio.h>
/*Programmer: Raghib Rizwan Rabani
Date: 19/09/2023*/

int main(){
	int a;
	a = 0;
	printf("Enter any number:");
	scanf("%d",&a);
	if(a%3 == 0){
		printf("MULTIPLE OF 3");
	}
	else{
		printf("NOT A MULTIPLE OF 3");
	}
return 0;
}
