#include "bounded_buffer.h" 
#include <stdio.h> 
#include <stdlib.h>
/*Do not use any global variables for implementation*/
/* initialize all necessary variables for the queue */ 
void bounded_buffer_init(struct bounded_buffer *queue, int size){ }
/* push an item into the tail of the queue. If the queue is full, wait until someone pops an item */ 
void bounded_buffer_push(struct bounded_buffer *queue, void *item){
}
/* pop an item from the top of the queue. If the queue is empty, wait until someone pushes an item */ 
void* bounded_buffer_pop(struct bounded_buffer *queue){     return NULL; }
/* release all resources */ void bounded_buffer_destroy(struct bounded_buffer *queue){ }
