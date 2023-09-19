#include <stdio.h>


void main(){
	char a;
	a = 'e';
	printf("Enter y/Y or n/N: ");
	scanf(" %c",&a);
	switch(a){
		case 'y':
			printf("Deleted Successfully");
			break;
		case 'Y':
			printf("Deleted Successfully");
			break;
		case 'n':
			printf("Delete Cancelled");
			break;
		case 'N':
			printf("Delete Cancelled");
			break;
		default:
			printf("Choose the correct option");
			break;
	}
}
