#include <stdio.h>
#include <stdlib.h>
//#include <string.h> : library with string functions

int length(char arr[]);

void main(){

  char s[] = "Friday";
  char d[25] = "Tuesday";
  printf("%d\n",length(s));
  printf("%d\n",length(d));
}

int length(char arr[]){
  char iter = arr[0];
  int counter = 0;
  while(iter){ // while(iter) == while(iter != 0) : 0 is false
    counter++;
    iter = arr[counter];
  }
  return counter;
}

// usage of pointers
int len(char arr[]){
  char *cp = arr;
  int counter = 0;
  while(*cp){ // while(*cp) == while(*cp != 0) : 0 is false
    counter++;
    cp++;
  }
  return counter;
}

int len2(char *arr){ // arr[] == *arr : array variables are pointers
  // char *cp = arr == *arr
  int counter = 0;
  while(*arr){ // while(*cp) == while(*cp != 0) : 0 is false
    counter++;
    arr++;
  }
  return counter;
}
