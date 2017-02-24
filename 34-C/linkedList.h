typedef struct node {
  void * obj;
  struct node *next;
} NODE;
typedef struct linkedList {
  NODE * head;
  int nodeSize; /*numBytes*/
  int length;
  void * comparatorFunction;
  void (*printNodeFunction)(void *);
} LINKEDLIST;

LINKEDLIST * init(int nodeSize, void* comparator, void* printNode);
int length(LINKEDLIST * list);
void insert(LINKEDLIST * list, void* val);
NODE * deleteIndex(NODE * head, int index);
void removeDuplicates(NODE * head);
void print(LINKEDLIST * list);
