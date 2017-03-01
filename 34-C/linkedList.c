
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
  list->tail = NULL;
  return list;
}
int length(LINKEDLIST * list){
  return list->length;
}
void insert(LINKEDLIST * list, void * val){ /*Will work if HEAD is NULL*/
  printf("start of insert\n");
  NODE * newNode = malloc(sizeof(NODE));
  newNode->obj = val;
  newNode->next = '\0';
  printf("new node created\n");
 
  if (list->length == 0){
    list->head = newNode;
    list->tail = newNode;
  } else {
    list->tail->next = newNode;
    list->tail = newNode;
    
  }
  list->length++;
}

NODE * deleteIndex(LINKEDLIST * list, int index){
  int i = 0;
  NODE * traversalNode = list->head;
  NODE * delNode;
  for(i=0;i<index-1;i++){
    traversalNode = traversalNode->next;
  }
  delNode = traversalNode->next;
  traversalNode->next = delNode->next;
  list->length--;
  delNode->next = NULL;
  return delNode;
}

void removeDuplicates(NODE * head){

}

void print(LINKEDLIST * list){
  NODE * temp = list->head;
  int i;
  for(i = 0; i < list->length; i++){
    list->printNodeFunction(temp->obj);
    printf("->");
    temp=temp->next;
  }
  printf("NULL\n");
  
}
