#include "linkedList.h"
#include <stdio.h>
void printInt(void * bits);
void myFunc(void *);

int main() {
  void (*printInt_ptr)(void *);
  printInt_ptr = &printInt;
  LINKEDLIST * list = init(4, 0, printInt_ptr);
  printf("%p\n\n", myFunc);

  void (*myFunc_ptr)(void *)= &myFunc;
  int num3 = 55555;
  (*myFunc_ptr)((void *) &num3);

  int num = 5;
  int num2 = 22;
  int * num1pointer = &num;
  insert(list, (void *) &num);
  insert(list, (void *) &num);
  insert(list, (void *) &num2);
  printf("%d", length(list));
  print(list);


}


void printInt(void * bits){
  printf("called");
  int * val = (int *) bits;
  printf("%d", *val);
}

void myFunc(void * num){
  int * numnum = (int * ) num;
  printf("%d", *numnum);
}
