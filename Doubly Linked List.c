#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* pre;
  struct node* next;
};
struct node* START=NULL;
//Creating the New Node
struct node* createNewNode(int value)
{
  struct node* ptr=(struct node*)malloc(sizeof(struct node));
  ptr->data=value;
  ptr->next=NULL;
  ptr->pre=NULL;
  return ptr;
}
//Add node from starting
void addNewNodeAtStart(struct node* ptr)
{
  if(START==NULL)
  START=ptr;
  else
  {
    struct node* temp=START;
    START=ptr;
    ptr->next=temp;
  }
}
//Add Node from the last of the doubly Linked List
 void addNodeAtEnd(struct node* ptr)
 {
   if(START==NULL)
   START=ptr;
   else
  {
    struct node* temp=START;
     while(temp->next!=NULL)
    { 
     temp=temp->next;
    }
    temp->next=ptr;
    ptr->pre=temp;
  }
 }
 //Add node from which index where You wish
void addNewNodeAt(struct node* ptr,int index)
{
  if(START==NULL)
  START=ptr;
  else
  {
    struct node* temp=START;
    struct node* t=temp->next;
    int count=0;
     while(count!=index-1)
    {
     temp=temp->next;
     t=temp->next; 
     count++;
    }
    temp->next=ptr;
    ptr->pre=temp;
    ptr->next=t;
    t->pre=ptr;
    t->next=NULL;
  }
}
//Delete the node from starting
void deleteNodeAtStart()
{  
  if(START==NULL)
  printf("Empty List");
  else
  {
    struct node* temp=START;
    START=START->next;
    free(temp);
  }
 }
 //Delete node from the last of the doubly Linked List
void deleteNodeAtLast()
{
  if(START==NULL)
  printf("Empty LINKED LIST");
  else
  {
    struct node* temp=START,*t=temp->next;
    while(t->next!=NULL)
    {
      temp=temp->next;
      t=temp->next;
    }
    temp->next=NULL;
    free(t);
  }
}
//Delete the node which index where you want
void deleteNodeAt(int index)
{
  if(START==NULL)
  printf("Empty  List");
  else
  {
    struct node* temp=START,*t=temp->next;
    int count=0;
    while(count!=index-1)
    {
      temp=temp->next;
      t=temp->next;
      count++;
    }
    temp->next=t->next;
    free(t);

  }
}
//Display Doubly Linked list from starting
void printLinkedList()
{
  struct node *temp=START;
   while(temp!=NULL)
   {
     printf("%d ",temp->data);
     temp=temp->next;
   }
}
//Display the whole  Linked list from the backward
void printReversedLinkedList()
{  
    struct node* temp=START;
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
    printf("From Backward");
    while(temp!=NULL)
    {
      printf("\t%d",temp->data);
      temp=temp->pre;
    }
}
int main(void)
{
  /*addNewNodeAtStart(createNewNode(3));
  addNewNodeAtStart(createNewNode(4));
  addNewNodeAtStart(createNewNode(5));
  addNewNodeAtStart(createNewNode(6));
  addNewNodeAtStart(createNewNode(7));
  addNewNodeAtStart(createNewNode(8));
 /* addNodeAtEnd(createNewNode(2));
  addNodeAtEnd(createNewNode(23));
  addNodeAtEnd(createNewNode(28));
  addNodeAtEnd(createNewNode(27));
  addNodeAtEnd(createNewNode(21));
  addNodeAtEnd(createNewNode(22));
  addNodeAtEnd(createNewNode(29));
  printLinkedList();
  addNewNodeAt(createNewNode(55),2);
  deleteNodeAtStart();
  printf("\n");*/
 // printLinkedList();
  addNodeAtEnd(createNewNode(88));
  addNodeAtEnd(createNewNode(89));
  addNodeAtEnd(createNewNode(888));
  addNodeAtEnd(createNewNode(885));
  //addNewNodeAt(createNewNode(885),2);
  printLinkedList();
  //deleteNodeAtLast();
  //deleteNodeAt(2);
  printf("\n");
  printLinkedList();
 printReversedLinkedList();
}