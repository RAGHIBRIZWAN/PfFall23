/*
* Programmer = Raghib Rizwan Rabani
* Roll no: = 23K0012
* Desc: To rotate Array  left by d position.
*/

#include <stdio.h>

int main(){
	int arr[10] = {0};
	int d = 0;
	int N;
	int i = 0;
	printf("Enter vale of N <= 10: ");
	scanf("%d",&N);
	for(i=0; i<N; i++){
		printf("Enter an integer in array");
		scanf("%d",&arr[i]);
	}
	
	printf("Enter value of d: ");
	scanf("%d",&d);

	for(int j = 0; j < d; j++){
		for(i = 0; i<N - 1; i++){
			int temp = arr[i+1];
			arr[i+1] = arr[i];
			arr[i] = temp;
		}
	}

	for(i=0; i<N; i++){
	printf("%d",arr[i]);
	}
}
