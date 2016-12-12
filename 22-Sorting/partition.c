#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void partition(const int* array, int start, int end);
int main(){
  int array[] = {4,6,1,8,2,12,15,2};
  //randomly choose one of the elements to be the partition
  //** arrays;
  partition(array, 0, (int) (sizeof(array) / sizeof(array[0]) - 1));

}

void partition(const int* array, int start, int end){
  srand(time(NULL));
  int r = rand() % (end - start) + start;
  printf(array[r]);

}
