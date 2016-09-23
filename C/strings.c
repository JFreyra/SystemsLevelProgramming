#include <stdio.h>
#include <stdlib.h>

void main(){
  char arr[25];

  arr[0] = 'c';
  arr[1] = 'h';
  arr[2] = 'a';
  arr[3] = 'r';
  arr[4] = 0; // terminates string

  printf("%s",arr);
  printf("\n");
  printf("%lu \n",sizeof(arr)); // 25, sizeof measures size of arr not string
}
