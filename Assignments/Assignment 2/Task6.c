#include <stdio.h>

int main() {
    int t=11,arr[100];
    for(int i = 0; i<10; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<10; i++){
        for(int j = 1; j<10; j++){
            if(arr[i]+arr[j]==t){
                printf("(%d , %d)",arr[i],arr[j]);
            }
        }
    }

    return 0;
}
