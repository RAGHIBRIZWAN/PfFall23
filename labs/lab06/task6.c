/*
 * Programer:Raghib Rizwan Rabani
 * Roll no: 23K-0012
 *Desc: match-stick game.
 *Date: 6/10/2023
*/
#include<stdio.h>

int main(){
	int i,n,a,b; // Declaration
	a=21; // Initialization
	for(i=1;a>1;i++){
		
		printf("you pick match sticks b/w 1-4\n");
		scanf("%d",&n);
		switch(n){
			case 1:
				printf("computer pick 4 match sticks.\n ");
				b=5-n;
				a=a-(b+n);
				break;
			case 2:
				printf("computer pick 3 match sticks.\n");
				b=5-n;
				a=a-(b+n);
				break;
			case 3:
				printf("computer pick 2 match sticks.\n ");
				b=5-n;
				a=a-(b+n);
				break;
			case 4:
				printf("computer pick 1 match sticks.\n ");
				b=5-n;
				a=a-(b+n);
				break;
			default:
				printf("pick match sticks b/w 1-4.\n");
				
		}
		printf("remaning sticks.%d\n",a);
	} // end for
	if(a==1){
		printf("you loss the game.");
	}else
	
	if(a==0){
		printf("game is tied.");
	}

 return 0;
} // end main
