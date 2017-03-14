
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
  NODE * newNode = malloc(sizeof(NODE));
  newNode->obj = val;
  newNode->next = '\0';
 
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

void removeDuplicates(LINKEDLIST * list){

  int i;
  int j;
  int compare;

  NODE * temp = list->head;
  NODE * temp2;
  i = 0;
  while (temp != NULL){
    j = i+1;
    temp2 = temp->next;
    while(temp2 != NULL){
      printf("about to compare\n");
      compare = list->comparatorFunction(temp->obj, temp2->obj);
      printf("just finished comparing: %d\n",compare);
      temp2 = temp2->next;      
      if (compare == 0){ 
        deleteIndex(list, j);
        j--;
      }
      j++;
    }
    i++;
    temp = temp->next;

  }

}
/*CTCI 2.2 : IMplement an alogrithm to find the kth to last element of a singly linked list */
/*TODO INDEX CHECKING*/
NODE * kthFromLast(int k, LINKEDLIST * list){
  NODE * front = list->head;
  NODE * back = list->head;
  while(k--) {
    back = back->next;
  }
  while (back->next != NULL){
    front = front->next;
    back = back->next;
  }
  return front;
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

void reverse(LINKEDLIST * list){
  
}
//1 2 | 3 4 -> 1 2 | 4 3
//1 2 | 3 4 5 -> 1 2 | 5 4 3
void reverseLastHalf(NODE * head){ /* reverse last half of list, just given a pointer to the head */
  //We can break up list into the left side and right side. boundary denoted by | 
  //0. Calculate length, for use in later steps
  int length;
  NODE * tmp = head;
  while (tmp != NULL) {
    length++;
    tmp = tmp->next;
  }
  //1. Get and store the last leftNode
  NODE * lastLeft;
  //Using 1-based indexing, for even length lists, lastLeft will be the ath node where a = length / 2
  //For odd length lists, lastLeft will also be ath node where a = length / 2
  //Since we have a pointer to the first node, we only need to jump to the next node a - 1 times;
  int a = length / 2;
  tmp = head;
  int i;
  for(i = 0; i < a - 1; i++){
    tmp = tmp->next;
  }
  lastLeft = temp;
  //2. Get and store the first rightNode
  NODE * firstRight = lastLeft->next;

  //3. Reverse right half
  int numNodesOnRight =  length - length / 2;
  //1 2 | 3 4 5 -> 1 2 | 5        3 4 5
  //1 2 | 5     3 4 5 - > 1 2 | 5 4...          3 4 5
  //1 2 | 5 4..    3 4 5 -> 1 2 | 5 4 3... 3 4 5 
  //1 2 | 5 4 3... 3 4 5 -> 1 2 | 5 4 3
  //

  //1 2 | 3 4
  //1 2 | 4
  //1 2 | 4 3
  tmp = lastLeft;
  for (i = 0; i < numNodesOnRight; i++){
    tmp->next = KForward(firstRight, numnodesOnRight - i - 1); 
    tmp = tmp->next;
  }
  firstRight->next = NULL; // firstRight is now the last right, so we have to make it's next node null;
  return head;
  
}
//TODO: also do a recursive solution for above method

//0 returns node
NODE * KForward(NODE * node, int k) {
  while(k--){
    node = node->next;
  }
  return node;
}
