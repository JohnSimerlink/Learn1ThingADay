/*
 * * C program to create a linked list and display the element in the list
 * */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main(){

  
  int size; /*numBytes*/;
  struct node {
    void * obj;
    struct node *next;
  };
  typedef struct node NODE;
  struct linkedList {
    NODE * head;
    int size; /*numBytes*/
  }
  typedef struct linkedList LINKEDLIST;

  NODE *head, *first, *temp = 0;/*[]what happens if I remove the =0? // does that temp = 0 statement assign a mem location for mem? [] look in assembly code with that removed and with it added // Wait we assigned the address of temp equal to 0. . */
  NODE *last;
  int count = 0;
  int choice = 1;
  first = 0;

  while (choice) {
    head = (NODE *) malloc(sizeof(NODE));
    printf("Enter the data item\n");
    scanf("%d", &head-> value);
    if (first != 0){
      temp->next = head;
      temp = head;/*/shouldn't this be head=temp? // nope. trace through creation of ll starting at the beginning.*/
    } else {
      first = temp = head;
    }
    fflush(stdin);
    printf("Do you want to continue (type 0 or 1?\n");
    scanf("%d", &choice);

  }
  temp->next=0;
  
  /* reset temp to the beginning */
  temp = first;
  printf("status of the nodes in the list is\n");
 while(temp != 0) {
   printf("%d", temp->value);
   printf("@%p", temp->next);
   printf(",");
   temp = temp->next;
 }


 /*what is first->next set to??? []check*/
}

LINKEDLIST * init(int nodeSize, void* comparator, void* printNode){

}
void insert(NODE * head, int val){ /*Will work if HEAD is NULL*/
 }
NODE * deleteIndex(NODE * head, int index){
}

void removeDuplicates(NODE * head){

}

void print(NODE* head){
}


