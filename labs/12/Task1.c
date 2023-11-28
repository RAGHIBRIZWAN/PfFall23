/*
  Programmer: Raghib Rizwan Rabani
  Roll No: 23K-0012
  Desc: Filing
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

# define SIZE 100

int line(cgar str[100]){
  char delim[2] = ",";
  int cols = 0;
  char *col = strtok(str,delim);

  while(col != NULL){
    cols++;
    col[strcspn(col,"\n")] = 0;
    printf("%-14s |",col);
    col = strtok(NULL,delim);
  }
  printf("\n");
  return cols;
}

void read(FILE* ptr){
  char buffer[SIZE];
  int rows = 0, cols = 0;

  while(!feof(ptr)){
    rows = line(fgets(buffer,SIZE,ptr));
    cols++;
  }
  printf("\n\nrows: %d,cols%d",cols,rows);
}

int main(){
  FILE* ptr = fopen("table.csv" , "r");
  read(ptr);
  fclose(ptr);
}
