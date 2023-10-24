int decidecarusage(int a, int b){
    if(a%2 == b%2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int carnum,daynum;
    printf("Enter number of car: ");
    scanf("%d",&carnum);
    printf("Enter number of day: ");
    scanf("%d",&daynum);
    
    int ans = decidecarusage(carnum,daynum);
    
    if(ans == 1){
        printf("Car should be used");
    }
    else{
        printf("Car should not be used");
    }
    
    return 0;
}
