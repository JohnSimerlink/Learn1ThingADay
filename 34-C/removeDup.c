/*
 * * C program to create a linked list and display the element in the list
 * */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void main(){

  struct node {
    int value;
    struct node *next;
  };
  typedef struct node NODE;

  NODE *head, *first, *temp = 0;// []what happens if I remove the =0? // does that temp = 0 statement assign a mem location for mem? [] look in assembly code with that removed and with it added // Wait we assigned the address of temp equal to 0. . 
  int count = 0;
  int choice = 1;
  first = 0;

  while (choice) {
    head = (NODE *) malloc(sizeof(NODE));
    printf("Enter the data item\n");
    scanf("%d", &head-> value);
    if (first != 0){
      temp->ptr = head;
      temp = head;
    } else {
      first = temp = head;
    }
    fflush(stdin);
