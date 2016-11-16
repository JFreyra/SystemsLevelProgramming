#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>

void main(){
  char* arg[] = {"ls","-l",NULL};
  execvp(arg[0],arg);
  printf("\nCatch\n");
}
