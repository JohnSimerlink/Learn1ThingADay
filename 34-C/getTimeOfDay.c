#include <sys/time.h>
#include <stdio.h>

int main(){
  char formatted[30];
  struct timeval now;
  int success;

  time_t curtime;

  success = gettimeofday(&now, NULL);
  curtime=tv.tv_sec;

  strftime(formatted, 30, "%m-%d-%Y %T.", localtime(&curtime));

  printf("Sucess is %i", success);
  printf("\n now is %ld", ((now.tv_sec * 1000000 + end.tv_usec))); 

  
  return 0;
}
