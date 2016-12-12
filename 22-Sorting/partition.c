#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void partition(const int* array, int start, int end);
int main(){
  int array[] = {4,6,1,8,2,12,15,2};
  partition(array, 0, (int) (sizeof(array) / sizeof(array[0]) - 1));

}

void partition(const int* array, int start, int end){
  int r, left, right; 
  srand(time(NULL));
  r = rand() % (end - start) + start;
  printf("The value is %i",array[r]);

  left = start;
  right = end;
  
}
