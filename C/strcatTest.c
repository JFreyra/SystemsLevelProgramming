#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printer(char *arr);

void main(){

  char s[] = "Tuesday";
  char d[] = "Friday";

  char *SandD = strcat(s,d);
  char *SandD3 = strncat(s,d,3);
  printer(SandD);
  printer(SandD3);
}

void printer(char *arr){
  while(*arr){
    printf("%s",*arr);
  }
  printf("\n");
}
