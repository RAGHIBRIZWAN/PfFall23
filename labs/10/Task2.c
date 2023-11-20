#include <stdio.h>

void swap(void *a, void *b, int size){
    
    unsigned char* p1 = (unsigned char*) a;
    unsigned char* p2 = (unsigned char*) b;

    for (size_t i = 0; i < size; i++)
    {
        p1[i] ^= p2[i];
        p2[i] ^= p1[i];
        p1[i] ^= p2[i];
    }
    
}

int main(){
    int a = 5,b = 10;
    char c = 'a',d = 'b';

    printf("before %d %d\n",a,b);
    swap(&a,&b,sizeof(int));
    printf("after %d %d\n",a,b);

    printf("before %d %d\n",c,d);    
    swap(&c,&d,sizeof(char));
    printf("after %d %d\n",c,d);
}
