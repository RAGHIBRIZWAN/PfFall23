#include <stdio.h>

int main() {
    int i,j,count;
    int freq[100] = {0};
    int arr[8] = {2,4,2,3,5,5,4,4};
    int n = 8;
    
    for(i = 0; i < n; i++){
        count = 1;
        for(j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
                freq[j] = -1;
            }
        }
        
        if(freq[i] != -1){
            freq[i] = count;
        }
    }
    for(i = 0; i < n; i++){
        if(freq[i] != -1){
            printf("Frequency of %d = %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
