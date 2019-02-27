#include <stdio.h>
#include <stdlib.h>

#include "node.h"

void display();
void insert(int val);
void insertAtTop(int val);
void del(int val);
struct node *first;

int main(void)
{
  //creates linked list
  first = malloc(sizeof(struct node));
  first->data = 10;
  first->next = NULL;
  insert(20);
  insertAtTop(0);
  display();
  del(20);
  display();
}

//display the entire list
void display()
{

  for (struct node *ptr = first; ptr != NULL; ptr = ptr->next)
  {
    printf("%i \n", ptr->data);
  }
}
//insert to end of a list.
void insert(int val)
{
  for (struct node *ptr = first; ptr != NULL; ptr = ptr->next)
  {
    if (ptr->next==NULL)
    {
      struct node *temp = malloc(sizeof(struct node));
      temp->data=val;
      temp->next = ptr->next;
      ptr->next = temp;
    }
    ptr=ptr->next;
  }
}
//insert at head of linked list.

void insertAtTop(int val)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->next=first;
    temp->data=val;
    first=temp;
}
// delete from a list.
 void del(int val)
 {
     for(struct node *ptr=first;ptr!=NULL;ptr=ptr->next)
     {
         if(ptr->data==val)
         {
             ptr=ptr->next;
             break;
         }
     }
 }
