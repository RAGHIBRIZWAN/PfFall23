/*
* Programmer: Raghib Rizwan Rabani
* Date: 12/09/2023
*/

# include <stdio.h>

int main(){
	int n;
	n = 0;
	printf("Input any number");
	scanf("%d", &n);
	int i;
	i = 1;
	while (i <= n){
		int r = i;
		i = i + 1;
		while(r>0){
			r = r-1;
			
			printf("*", &r);
			
		}
		printf("\n");		
	}
	
}
