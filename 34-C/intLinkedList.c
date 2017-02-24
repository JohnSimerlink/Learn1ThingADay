#include "linkedList.h"
#include <stdio.h>

int main() {
  LINKEDLIST * list = init(4, 0, 0);
  printf("%d", length(list));
}
