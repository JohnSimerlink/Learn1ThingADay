
/*
 * * C program to create a linked list and display the element in the list
 * */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "linkedList.h"

struct linkedList * init(int nodeSize, void* comparatorFunction, void* printNode){
  LINKEDLIST * list = malloc(sizeof(LINKEDLIST));
  list->nodeSize = nodeSize;
  list->comparatorFunction = comparatorFunction;
  list->printNodeFunction = printNode;
  list->head = NULL;
  list->length = 0;
  return list;
}
int length(LINKEDLIST * list){
  return list->length;
}
void insert(LINKEDLIST * list, void * val){ /*Will work if HEAD is NULL*/
  printf("start of insert");
  NODE * newNode = malloc(sizeof(NODE));
  newNode->obj = val;
  newNode->next = '\0';
  printf("new node created");
 
  if (list->length == 0){
    list->head = newNode;
  } else {
    int addressOffset = 0;
    addressOffset = sizeof(NODE)*(list->length - 1);
    NODE * tail = list->head + addressOffset;
    
    tail->next = newNode;
    
  }
  list->length++;
  printf("end of insert");
  /**/
 }
NODE * deleteIndex(NODE * head, int index){
}

void removeDuplicates(NODE * head){

}

void print(LINKEDLIST * list){
  printf("print called");
  (list->printNodeFunction)(list->head);
  
}
