#include "linkedList.h"
#include <stdio.h>
void printInt(void * bits);

int main() {
  LINKEDLIST * list = init(4, 0, &printInt);

  int num = 5;
  int num2 = 22;
  int * num1pointer = &num;
  insert(list, '\0');
  /*insert(list, (void *) &num);
  insert(list, (void *) &num2);*/
  printf("%d", length(list));


}


void printInt(void * bits){
  int * val = (int *) bits;
  printf("%d", *val);
}
