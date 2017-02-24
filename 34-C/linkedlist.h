typedef struct node {
  void * obj;
  struct node *next;
} NODE;
typedef struct linkedList {
  NODE * head;
  int size; /*numBytes*/
  int length;
  void * comparatorFunction;
  void * printNodeFunction;
} LINKEDLIST;

LINKEDLIST * init(int nodeSize, void* comparator, void* printNode);
int length(LINKEDLIST * list){
void insert(NODE * head, int val);
NODE * deleteIndex(NODE * head, int index);
void removeDuplicates(NODE * head);
void print(NODE* head);
