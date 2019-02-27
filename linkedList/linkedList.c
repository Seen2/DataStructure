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
  first->data = 2;
  first->next = NULL;
  insert(3);
  insertAtTop(1);
  insert(4);
  insertAtTop(-1);
  display();
  printf("\n  \n");
  insert(4);
  del(-1);
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
    if (ptr->next == NULL)
    {
      ptr->next = malloc(sizeof(struct node));
      ptr = ptr->next;
      ptr->data = val;
      ptr->next = NULL;
      break;
    }
    ptr = ptr->next;
  }
}
//insert at head of linked list.

void insertAtTop(int val)
{
  if (first->next == NULL)
  {
    insert(val);
  }
  struct node *temp = malloc(sizeof(struct node));
  temp->next = first;
  temp->data = val;
  first = temp;
}
// delete from a list.
void del(int val)
{
  for (struct node *ptr = first; ptr != NULL; ptr = ptr->next)
  {
    if (ptr->data == val && ptr == first)
    {
      free(first);
      first = ptr->next;
      free(ptr);
      break;
    }

    if (ptr->next->data == val)
    {
      ptr->next = ptr->next->next;
      break;
    }
  }
}
