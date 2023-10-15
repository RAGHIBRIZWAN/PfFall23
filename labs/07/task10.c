#include <stdio.h>

int main() {
    int S = 0;
    int size = 0;
    int i = 0;
    int arr[10] = {0};
    //int arr[5] = {1,2,3,7,5};
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
    int ans = 0;
    int temp;
    
    for(i=0; i<5; i++){
		printf("Enter an integer in array");
		scanf("%d",&arr[i]);
	}
	
	printf("Enter value of S: ");
    scanf("%d",&S);

    for(i = 0; i < 5; i++){
        for(j = i+1; j < 5; j++){
            temp = arr[i] + arr[j];
            if(temp == S){
                ans = temp;
            }
        }
    }
    
    for(i = 0; i < 5; i++){
        for(j = i+1; j < 5; j++){
            for(k = j+1; k < 5; k++){
                temp = arr[i] + arr[j] + arr[k];
                if(temp == S){
                    ans = temp;
                }
            }
        }
    }
    
    for(i = 0; i < 5; i++){
        for(j = i+1; j < 5; j++){
            for(k = j+1; k < 5; k++){
                for(l = k+1; l<5; l++){
                    temp = arr[i] + arr[j] + arr[k] + arr[l];
                    if(temp == S){
                        ans = temp;
                    }
                }
            }
        }
    }
    
    for(i = 0; i < 5; i++){
        for(j = i+1; j < 5; j++){
            for(k = j+1; k < 5; k++){
                for(l = k+1; l<5; l++){
                    for(m = l+1; m<5; m++){
                        temp = arr[i] + arr[j] + arr[k] + arr[l] + arr[m];
                        if(temp == S){
                            ans = temp;
                        }
                    }
                }
            }
        }
    }
    

    
    printf("%d",ans);
    

    return 0;
}
