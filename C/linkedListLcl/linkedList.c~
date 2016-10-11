#include <stdio.h>
#include <stdlib.h>

struct node{int value; struct node *next;};

void print_list(struct node *iter){
  while(iter){
    printf("%d\n",iter->value);
    iter = iter->next;
  }
}

struct node *insert_front(int newValue, struct node *start){
  struct node *newStart = (struct node*)malloc(sizeof(struct node));
  newStart->value = newValue;
  newStart->next = start;
  return newStart;
}

struct node *free_list(struct node *start){
  struct node *startTemp = start;
  while(start){
    struct node *temp = start->next;
    start->next = NULL;
    free(start);
    start = temp;
  }
}

void main(){
  struct node *node3 = (struct node*)malloc(sizeof(struct node));
  node3->value = 3;
  node3->next = NULL;
  struct node *node2 = (struct node*)malloc(sizeof(struct node));
  node2->value = 2;
  node2->next = node3;
  struct node *node1 = insert_front(1,node2);

  printf("before free_list\n");
  print_list(node1);
  free_list(node1);
  printf("after free_list\n");
  print_list(node1);
}
