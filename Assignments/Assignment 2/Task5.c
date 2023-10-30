#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int a,b,c,d,f,g;
    printf("enter limit n^3: ");
    scanf("%d",&n);
    for(a=1;a<=n*n*n;a++){
        for(b=1;b<=n*n*n;b++){
             f = a*a*a + b*b*b;
            for(c=b+1;c<=n*n*n;c++){
                for(d=c+1;d<=n*n*n;d++){
                    g= d*d*d + c*c*c;
                    if(f==g){
                        printf("Ramanujan numbers");
                        printf("%d^3 + %d^3 == %d^3 + %d^3 = %d",a,b,c,d,a*a*a+b*b*b);
                        printf("\n");
                    }
                }
            }
        }
    }
    
    
    return 0;
}
