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
NODE * kthFromLast(int k, LINKEDLIST * list);
void print(LINKEDLIST * list);
void reverse(LINKEDLIST * list);
void reverseLastHalf(NODE * head); /* reverse last half of list, just given a pointer to the head */
