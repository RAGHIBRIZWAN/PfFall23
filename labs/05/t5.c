#include <stdio.h>

void main(){
	char a = 'x';
	printf("Enter something:");
	scanf(" %c",&a);
	if(a >= 48 && a <= 57){
		printf("IT IS A DIGIT");
	}
	else if(a <= 47 || (a >= 58 && a <= 64) || (a >= 91 && a <= 96) || (a >= 123 && a <= 127)){
		printf("IT IS A SPECIAL CHARACTER");
	}
	else if(a >= 65 && a <= 90){
		printf("IT IS A CAPITAL ALPHABET");
	}
	else if(a >= 97 && a <= 122){
		printf("IT IS A SMALL CHARACTER");
	}
	else{
		printf("ERROR");
	}
}
