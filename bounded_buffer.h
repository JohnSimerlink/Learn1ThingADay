#ifndef _BOUNDED_BUFFER_H
#define _BOUNDED_BUFFER_H
#include <pthread.h>

/* do not use any global variables in this file */

struct bounded_buffer{
    /* define all necessary variables here */
};

void bounded_buffer_init(struct bounded_buffer *queue, int size);

void bounded_buffer_push(struct bounded_buffer *queue, void *item);

void* bounded_buffer_pop(struct bounded_buffer *queue);

void bounded_buffer_destroy(struct bounded_buffer *queue);

#endif
