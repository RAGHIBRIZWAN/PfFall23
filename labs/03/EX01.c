#include <stdio.h>
#include <math.h>

int main() {
    char opt;  
    int num1, num2;   
    float res;  
    printf (" Select an operator (+, -, *, /) \n ");  
    scanf ("%c", &opt); 
    printf (" Enter the first number: ");  
    scanf(" %d", &num1);   
    printf (" Enter the second number: ");  
    scanf (" %d", &num2);   
      if (opt == '+')  
    {  
        res = num1 + num2; 
        printf (" Addition of num1 and num2 is: %f", res);  
    }  
      
    else if (opt == '-')  
    {  
        res = num1 - num2;   
        printf (" Subtraction of num1 and num2 is: %f", res);  
    }  
      
    else if (opt == '*')  
    {  
        res = num1 * num2;  
        printf (" Multiplication of num1 and num2 is: %f", res);  
    }  
      
    else if (opt == '/')  
    {  
        res = num1 / num2;  
        printf (" Division of num1 and num2 is: %f", res);  
    }  
    else  
    {  
        printf(" \n You have entered wrong inputs ");  
    }  
    return 0;  
}
