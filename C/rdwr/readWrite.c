#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

void main(){

  umask(0000);

  int i;
  i = open("testFileCreate.txt",O_CREAT | O_EXCL,0666);
  printf("returned: %d\n",i);
  
  //system("chmod 666 readWrite.c testFileCreate.txt");

}
