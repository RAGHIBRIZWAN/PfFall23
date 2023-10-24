/* Programmer: Raghib Rizwan Rabani 
  roll no: 23k-0012
   description: Calculate discount by last month coming records and purchase .
   Date: 24/10/2023
*/ 
#include<stdio.h>
int calculated(int a, int b){
	int discount;
	if(a>=50 && b>10){
		discount =15;
		a-=(a/100)*discount;
	}
	else if(a>5 && b>=30){
		discount=10;
		a -=(a/100)*discount;
	}
	return a;	
}
int main (){
	int totalprice, visit,cost;
	printf("Enter total purchase amount:");
	scanf("%d", &totalprice);
	printf("Enter number of time visited past month:");
	scanf("%d", &visit);

	
	cost = calculated(totalprice,visit);
	printf("Amount after discount:%d", cost);
	return 0;
}
