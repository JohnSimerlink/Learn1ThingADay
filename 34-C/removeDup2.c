/*
 * * C program to create a linked list and display the element in the list
 * */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

LINKEDLIST * init(int nodeSize, void* comparator, void* printNode);
void insert(NODE * head, int val);
NODE * deleteIndex(NODE * head, int index);
void removeDuplicates(NODE * head);
void print(NODE* head);

  struct node {
    void * obj;
    struct node *next;
  };
  typedef struct node NODE;
  struct linkedList {
    NODE * head;
    int size; /*numBytes*/
    void * comparatorFunction;
    void * printNodeFunction;
  }
  typedef struct linkedList LINKEDLIST;


LINKEDLIST * init(int nodeSize, void* comparator, void* printNode){
  LINKEDLIST * list = malloc(sizeof(LINKEDLIST));
  list->nodeSize = nodeSize;
  list->comparator = comparatorFunction;
  list->printNodeFunction = printNode;
  list->head = NULL;
  return list;
}
int length(LINKEDLIST * list){

}
void insert(LINKEDLIST * lis , void * val){ /*Will work if HEAD is NULL*/
  NODE * next = malloc(sizeof(NODE));
  head
 }
NODE * deleteIndex(NODE * head, int index){
}

void removeDuplicates(NODE * head){

}

void print(NODE* head){
}


