# include <stdio.h>

int main(){

  int a = -1;
  unsigned int b = a;
  printf("%u\n", (unsigned int) a);
  printf("%u\n", (unsigned int) b);
  printf("%d\n", (unsigned int) b);
  printf("%p\n", (unsigned int) b);
  printf("%f\n", (unsigned int) b);
}
