#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#define THREAD_NO 10

int initialized;
void *mythread(void * arg){
  int *id = (int *) arg;
  printf("my id is %d\n", *id);
  free(id);
  return NULL;
}

void *longThread(void * arg) {
  int i;
  for(i = 0; i < 10000000; i++){
    if (i % 10000 == 0){
      printf("==LONG THREAD:%dTH GROUP==", i /10000);
    }
  }
  return NULL;
}
int main(){
  pthread_t p[THREAD_NO];
  int i;
  
  for (i=0; i < THREAD_NO; i++){
    int *tmp = (int *) malloc(sizeof(int *));
    *tmp = i;
    pthread_create(&p[i], NULL, mythread, (void *) tmp);
  }

  for(i=0; i < THREAD_NO; i++){
    pthread_join(p[i], NULL);
  }

  printf("\n\nSECTION TWO\n\n");
  pthread_t longThreadP;
 // pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
 // pthread_cond_t init = PTHREAD_COND_INITIALIZER;
 // Pthread_mutex_lock(&lock);
 // while(initialized == 0){
 //   Pthread_cond_wait(&init, &lock); 
 // }
 // Pthread_mutex_unlock(&lock);
  pthread_create(&longThreadP, NULL, longThread, NULL);
  for(i = 0; i < 10000000; i++){
    if (i % 10000 == 0){
      printf("main thread:%dth group", i /10000);
    }
  }


  printf("END OF SECTION TWO");
  pthread_join(longThreadP, NULL);
 return 0;
}
