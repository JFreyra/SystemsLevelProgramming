#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myStrlen(char *arr);
void myStrncpy(char *arr1, char *arr2, int n);
void myStrcat(char *arr1, char *arr2);
int myStrcmp(char *arr1, char *arr2);
char *myStrchr(char *arr, char c);

void main(){

  char s[] = "Tuesday";
  char d[] = "Friday";
  char a[] = "Monday";
  char b[] = "Thursday";
  char c[] = "one";
  char e[] = "one";
  char f[] = "two";
  char g[] = "four";
  char h[] = "fourzzz";

  //strlen
  printf("length of s: %d \n",myStrlen(s));
  printf("length of d: %d \n",myStrlen(d));
  //strncpy
  myStrncpy(s,d,5);
  printf("%s \n",s);
  //strcat
  myStrcat(a,b);
  printf("%s \n",a);
  //strcmp
  printf("%d \n",myStrcmp(c,e));
  printf("%d \n",myStrcmp(e,f));
  printf("%d \n",myStrcmp(f,g));
  printf("%d \n",myStrcmp(g,h));
  //strchr
  printf("%d \n",myStrchr(c,'a') == 0);
  printf("%d \n",myStrchr(c,'o') > 0);
  
}

int myStrlen(char *arr){
  int i = 0;
  while(*arr){
    i++;
    arr++;
  }
  return i;
}

// assumes arr1 and arr2 are null terminated
void myStrncpy(char *arr1, char *arr2, int n){
  while(n && *arr1 && *arr2){
    *arr1 = *arr2;
    arr1++;
    arr2++;
    n--;
  }
  *arr1 = *arr2;
}

void myStrcat(char *arr1, char *arr2){
  while(*arr1){
    arr1++;
  }
  while(*arr2){
    *arr1 = *arr2;
    arr1++;
    arr2++;
  }
  *arr1 = *arr2;
}

int myStrcmp(char *arr1, char *arr2){
  while(*arr1 && *arr2){
    if(*arr1 == *arr2){
      arr1++;
      arr2++;
    }
    else
      break;
  }
  return *arr1 - *arr2;
}

char *myStrchr(char *arr, char c){
  while(*arr){
    if(*arr == c)
      return arr;
    arr++;
  }
  return 0;
}
