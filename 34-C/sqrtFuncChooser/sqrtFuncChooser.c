#include <stdio.h>
#include <unistd.h>
int main() {


  int age;
  char buffer[3];
  int i;
  printf("How old are you?");
  fflush(stdin);
  read(STDIN_FILENO, &buffer, 3);



  for (i = 0; i < 3; i++){
    printf("%c:::", buffer[i]);
  }

/*  printf("you are %d", age);*/

}
