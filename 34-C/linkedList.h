typedef struct node {
  void * obj;
  struct node *next;
} NODE;
typedef struct linkedList {
  NODE * head;
  NODE * tail;
  int nodeSize; /*numBytes*/
  int length;
  int (*comparatorFunction)(void *, void *);
  void (*printNodeFunction)(void *);
} LINKEDLIST;

LINKEDLIST * init(int nodeSize, void* comparator, void* printNode);
int length(LINKEDLIST * list);
void insert(LINKEDLIST * list, void* val);
NODE * deleteIndex(LINKEDLIST * list, int index);
void removeDuplicates(LINKEDLIST * head);
void print(LINKEDLIST * list);
