#include "linkedList.h"
#include <stdio.h>
void printInt(void * bits);
void myFunc(void *);
void printDouble(void * ptr1);
int intComparator(void * ptr1, void * ptr2);
int doubleComparator(void * ptr1, void * ptr2);
int main() {
  LINKEDLIST * list = init(4, &intComparator, &printInt);
  printf("%p\n\n", myFunc);

  int num = 5;
  int num2 = 22;
  int num3 = 535;
  insert(list, (void *) &num2);
  insert(list, (void *) &num);
  insert(list, (void *) &num3);
  insert(list, (void *) &num);
  insert(list, (void *) &num2);
  insert(list, (void *) &num);
  insert(list, (void *) &num3);
  printf("length:%d\n", length(list));
  print(list);

  printInt(deleteIndex(list, 1)->obj);
  printf("\nWe just deleteda node\n");
  print(list);
  printf("\nDELETING DUPS\n");
  removeDuplicates(list);
  print(list);

  /*2.2 kth to last */
  printf("\nSECOND FROM LAST\n");
  NODE * secondFromLast = kthFromLast(2,list);
  printInt(secondFromLast->obj);
  printf("\nEND SECOND FROM LAST\n");
  printf("=================END INTEGER SECTION============\n\n");
  printf("\n\n=================START DOUBLE SECTION============\n\n");
  LINKEDLIST * dList = init(4, &doubleComparator, &printDouble);
  double d1 = 1.0;
  double d2 = 2.5;
  double d3 = 0.0;
  double d4 = 0.5;
  double d5 = 1.0/2.0;
  insert(dList, &d1);
  insert(dList, &d2);
  insert(dList, &d3);
  insert(dList, &d4);
  insert(dList, &d1);
  insert(dList, &d2);
  insert(dList, &d3);
  insert(dList, &d5);

  printf("length:%d\n", length(dList));
  print(dList);

  printDouble(deleteIndex(dList, 1)->obj);
  printf("\nWe just deleteda node\n");
  print(dList);
  printf("\nDELETING DUPS\n");
  removeDuplicates(dList);
  print(dList);

}

void printDouble(void * val_ptr){
  double * val = (double *) val_ptr;
  printf("%f",*val);
}

int doubleComparator(void * ptr1, void * ptr2){
  return (int)(*((double *) ptr1) - *((double *) ptr2));
}

void printInt(void * bits){
  int * val = (int *) bits;
  printf("%d", *val);
}

int intComparator(void * ptr1, void *ptr2){
  int num1 = *((int *) ptr1);
  int num2 = *((int *) ptr2);

  return num1 - num2;
} 

void myFunc(void * num){
  int * numnum = (int * ) num;
  printf("%d", *numnum);
}
