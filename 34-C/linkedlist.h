struct node {
  void * obj;
  struct node *next;
};
typedef struct node NODE;
struct linkedList {
  NODE * head;
  int size; /*numBytes*/
  int length;
  void * comparatorFunction;
  void * printNodeFunction;
}
typedef struct linkedList LINKEDLIST;

LINKEDLIST * init(int nodeSize, void* comparator, void* printNode);
int length(LINKEDLIST * list){
void insert(NODE * head, int val);
NODE * deleteIndex(NODE * head, int index);
void removeDuplicates(NODE * head);
void print(NODE* head);
