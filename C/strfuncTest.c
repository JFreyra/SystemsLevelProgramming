#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myStrlen(char *arr);
void myStrncpy(char *arr1, char *arr2, int n);

void main(){

  char s[] = "Tuesday";
  char d[] = "Friday";

  //strlen
  printf("length of s: %d \n",myStrlen(s));
  printf("length of d: %d \n",myStrlen(d));
  //strncpy
  myStrncpy(s,d,3);
  //strcat
  
  //strcmp

  //strchr
}

int myStrlen(char *arr){
  int i = 0;
  while(*arr){
    i++;
    arr++;
  }
  return i;
}

void myStrncpy(char *arr1, char *arr2, int n){
  while(n){
    //*cp = *arr2;
    //cp++;
    //arr2++;
    n--;
  }
}
