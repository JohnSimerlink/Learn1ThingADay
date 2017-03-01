#include "linkedList.h"
#include <stdio.h>
void printInt(void * bits);
void myFunc(void *);

int main() {
  void (*printInt_ptr)(void *);
  printInt_ptr = &printInt;
  LINKEDLIST * list = init(4, 0, printInt_ptr);
  printf("%p\n\n", myFunc);

  /*void (*myFunc_ptr)(void *)= &myFunc;
  int num3 = 55555;
  (*myFunc_ptr)((void *) &num3);*/

  int num = 5;
  int num2 = 22;
  int num3 = 535;
  int * num1pointer = &num;
  insert(list, (void *) &num);
  insert(list, (void *) &num2);
  insert(list, (void *) &num3);
  printf("%d\n", length(list));
  print(list);

  printInt(deleteIndex(list, 1)->obj);
  printf("\nWe just deleteda node\n");
  print(list);

}


void printInt(void * bits){
  int * val = (int *) bits;
  printf("%d", *val);
}

void myFunc(void * num){
  int * numnum = (int * ) num;
  printf("%d", *numnum);
}
