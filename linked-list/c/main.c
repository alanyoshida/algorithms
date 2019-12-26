#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

typedef struct Node {
  int number;
  struct Node* next;
} Node;

typedef Node* NodePtr;
typedef Node** NodePtrPtr;

void printMenu();
void insert(NodePtrPtr head, NodePtrPtr tail, int value);
void printList(NodePtr head);
void search();
void debugNodess();

int main(){
  NodePtr head = NULL; 
  NodePtr tail = NULL; 
  int menu, value;
  while(1){
    printMenu();
    printf("Select option: ");
    scanf("%d", &menu);
    system("clear");
    switch(menu){
      case 1:
        printf("Value:");
        scanf("%d", &value);
        insert(&head, &tail, value);
        break;
      case 2:
        printList(head);
        break;
      case 3:
        search();
        break;
      case 0:
        return 0;
    }
  }
}  

void insert(NodePtrPtr headPtr, NodePtrPtr tailPtr, int value) {
  NodePtr head = (*headPtr);
  NodePtr tail = (*tailPtr);
  printf("----------------\ninside insert \nhead = %s ", head == NULL ? "NULL": "NOT NULL");
  printf("tail = %s \n", tail == NULL ? "NULL": "NOT NULL");

  NodePtr newNode = (NodePtr) malloc(sizeof(Node));
  newNode->number = value;
  newNode->next = NULL;

  if(head == NULL){
    *headPtr = newNode;
    head = newNode;
    *tailPtr = newNode;
    tail = newNode;

    printf("\n----------------\nhead = { \n\t number: %d,\n\t next: %s \n}", head->number, head->next == NULL ? "NULL": "NOT NULL" );
    printf("\nhead address = %p", (void*)&head);

    printf("\n----------------\ntail = { \n\t number: %d, \n\t next: %s \n}", tail->number, tail->next == NULL ? "NULL": "NOT NULL" );
    printf("\ntail address = %p", (void*)&tail);
  } else {
    tail->next = newNode;
    *tailPtr = tail->next;
    tail = tail->next;
    printf("\n----------------\nhead = { \n\t number: %d,\n\t next: %s \n}", head->number, head->next == NULL ? "NULL": "NOT NULL" );
    printf("\nhead address = %p", (void*)&head);
    printf("\nhead address = %p", (void*)&head);

    printf("\n----------------\ntail = { \n\t number: %d, \n\t next: %s \n}", tail->number, tail->next == NULL ? "NULL": "NOT NULL" );
    printf("\ntail address = %p", (void*)&tail);
  }
}


void printList(NodePtr head){
  NodePtr current = head;
  while (current!=NULL){
    printf("%d -> ", current->number);
    current = current->next;
  }
  printf("NULL");
}

void search(){

}

void printMenu() {
  printf("\n\n----------------------\nMenu:\n\n");
  printf(" 1 - Insert element; \n");
  printf(" 2 - Print List; \n");
  printf(" 0 - exit; \n");
} 

// Fazendo lista linkada manualmente
void simpleLinkedList(){
  NodePtr head = NULL; 

  head = (NodePtr) malloc(sizeof(Node)); 
  NodePtr first = (NodePtr) malloc(sizeof(Node));
  first->number = 1;

  NodePtr second =  (NodePtr) malloc(sizeof(Node));

  first->next = second;
  second->number=2;
  
  printf("%d -> %d \n", first->number, first->next->number);

}
