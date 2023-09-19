#include <stdio.h>



int main(){
	int a;
	a = 0;
	printf("What time is it?");
	scanf("%d",&a);
	if(a == 5 || a == 6 || a == 7 || a == 8 || a == 9 || a == 10 || a == 11){
		printf("Good Morning");
	}
	else if(a == 12 || a == 13 || a == 14 || a == 15 || a == 16 || a == 17 || a == 18){
		printf("Good Evening");
	}
	else if(a == 19 || a == 20 || a == 21 || a == 22 || a == 23 || a == 24){
		printf("Good Night");
	}
	else{
		printf("ERROR");
	}
return 0;
}
