#include <stdio.h>

void main(){
	int a = 0;
	int b = 0;
	char operator = 'e';
	printf("Enter 1st Number:");
	scanf("%d",&a);
	printf("Enter 2nd Number:");
	scanf("%d",&b);
	printf("Enter any operator:");
	scanf(" %c", &operator);
	switch(operator){
		case '+':
			printf("%d", a+b);
			break;
		case '-':
			printf("%d", a-b);
			break;
		case '*':
			printf("%d", a*b);
			break;
		case '/':
			printf("%d", a/b);
			break;
		default:
			printf("ERROR");
			break;
	}
}
