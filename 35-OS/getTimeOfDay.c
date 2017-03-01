#include <stdio.h>
#include <sys/time.h>

int main(){
struct timeval begin, end;
struct timeval *begin=malloc(sizeof(struct timeval)), *end=malloc(sizeof(struct timeval));
int i;
gettimeofday(&begin, NULL);
for(i =0; i < 1000000; i++){
  i+=0;
}
gettimeofday(&end, NULL);

unsigned int t = end.tv_usec - begin.tv_usec;
printf("%d",s);

}
