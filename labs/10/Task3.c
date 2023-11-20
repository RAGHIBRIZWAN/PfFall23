#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}


void fillWithPrimes(int** array, int rows, int cols) {
    int count = 0;
    int num = 2; 

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            while (!isPrime(num)) {
                num++;
            }

            array[i][j] = num;
            num++;
        }
    }
}

void printArray(int** array, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%4d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Dynamically allocate memory for a 2D array
    int** myArray = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; ++i) {
        myArray[i] = (int*)malloc(cols * sizeof(int));
    }

    fillWithPrimes(myArray, rows, cols);

    printf("\n2D Array filled with consecutive prime numbers:\n");
    printArray(myArray, rows, cols);


    return 0;
}
