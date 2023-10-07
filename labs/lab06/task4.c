/*
* Programmer = Raghib Rizwan Rabani
* Roll no: = 23K0012
* Desc: if the program exceeds 9 it output even or odd or if not then the number will be written in english.
*/

#include <stdio.h>

void main(){
	int a = 0;
	int b = 0;
	printf("Enter 1st number: ");
	scanf("%d",&a);

	printf("Enter 2nd number: ");
	scanf("%d",&b);

	for(int i = a;i<=b;++i){
		switch(i){
		case 0:printf("zero\n");break;
		case 1:printf("one\n");break;
		case 2:printf("two\n");break;
		case 3:printf("three\n");break;
		case 4:printf("four\n");break;
		case 5:printf("five\n");break;
		case 6:printf("six\n");break;
		case 7:printf("seven\n");break;
		case 8:printf("eight\n");break;
		case 9:printf("nine\n");break;
		default:if(i%2==0){
				printf("EVEN\n");
			}
			else{	
				printf("ODD");
			}
		}
	
	}
}
