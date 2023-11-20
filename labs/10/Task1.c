#include <stdio.h>

void array(void* arr, int size,int datatype){
    switch (datatype)
    {
    case 1:
        for (int i = 0; i < size / sizeof(arr); i++)
        {
            printf("%d\n",*((int*)arr + i));
        }
        
        break;

        case 2:
        for (int j = 0; j < size; j++)
        {
            printf("%c\n ",*((char*)arr + j));
        }
        
        break;
    
    default:
        break;
    }
}

int main(){
    int size;
    int arr[] = {1,2,3,4,5};
    char brr[] = {'a','b','c','d','e'};
    
    array(arr,sizeof(arr),1);
    array(brr,sizeof(brr),2);
}
