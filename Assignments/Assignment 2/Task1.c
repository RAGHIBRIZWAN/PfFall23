/*Name : Raghib Rizwan Rabani
Roll No: 23k-0012
Description : Statistic of each batsman
date: 30/10/2023
  */
  
#include <stdio.h>
int main() {
    int a,b,c;
    int total=0, avg=0, highest=0, halfcent=0, cent=0;
    int arr[100][100] ;

    printf("Enter the number of batsmen: ");
    scanf("%d",&b );
    
    printf("Enter number of innings: ");
    scanf("%d",&a);

    int i,j;
  
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            printf("Enter Score: ");
            scanf("%d", &arr[i][j]);
        }//end j loop
    }//end i loop
    
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            total += arr[i][j];
            
            if(highest < arr[i][j]){
                highest = arr[i][j];
            }
            
            if(arr[i][j] >=100){
                cent++;
            }else if(arr[i][j] > 50 && arr[i][j] <100){
                halfcent++;
            }
        }//end j loop
        avg = total / a;
        
        printf(" Total = %d\n Average = %d\n Highest = %d\n number of centuries = %d\n number of half centuries = %d\n\n", total, avg,highest,cent,halfcent);
        total =0;
        avg =0;
        highest =0;
        halfcent = 0;
        cent = 0;
    }//end i loop
}//end main
