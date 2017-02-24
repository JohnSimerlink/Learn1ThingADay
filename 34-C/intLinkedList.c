#include "linkedList.h"
#include <stdio.h>
void printInt(void * bits);
void myFunc(int);

int main() {
  void (*printInt_ptr)(void *);
  printInt_ptr = &printInt;
  LINKEDLIST * list = init(4, 0, printInt_ptr);

  void (*myFunc_ptr)(int)= &myFunc;
  (*myFunc_ptr)(5);

  int num = 5;
  int num2 = 22;
  int * num1pointer = &num;
  insert(list, '\0');
  insert(list, (void *) &num);
  insert(list, (void *) &num2);
  printf("%d", length(list));
/*  print(list);*/


}


void printInt(void * bits){
  printf("called");
  int * val = (int *) bits;
  printf("%d", *val);
}

void myFunc(int num){
  printf("%d", num);
}
