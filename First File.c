#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* next;
};
struct node* START=NULL;
struct node* createNode(int value)
{
  struct node* ptr;
  ptr=(struct node*)malloc(sizeof(struct node));
  ptr->data=value;
  return ptr;
}
void addNewNodeAtStart(struct node* ptr)
{
  if (START==NULL)
  {
    START=ptr;
  }
   else //(START!=NULL)
  {
    struct node* temp=START;
    START=ptr;
    ptr->next=temp;
  }
}
void printLinkedList()
{
 struct node* temp=START;
 while(temp!=NULL)
 {
   printf(" %d",temp->data);
   temp=temp->next;
 } 
}

int main()
{
  //creating a linked LinkedList
  addNewNodeAtStart(createNode(7));
  addNewNodeAtStart(createNode(9));
  addNewNodeAtStart(createNode(8));
  addNewNodeAtStart(createNode(5));
  addNewNodeAtStart(createNode(9));
  addNewNodeAtStart(createNode(1));
  addNewNodeAtStart(createNode(9));
  addNewNodeAtStart(createNode(4));
  //printing Linked LinkedList
  printLinkedList();
}
