#include <stdio.h>
#include <stdlib.h>

#include "node.h"

void display();
void insert(int val);
struct node *first;

int main(void)
{
  //creates linked list
  first = malloc(sizeof(struct node));
  first->data = 10;
  first->next = NULL;
  display();
  insert(20);
}

//display the entire list
void display()
{

  for (struct node *ptr = first; ptr != NULL; ptr = ptr->next)
  {
    printf("%i \n", ptr->data);
  }
}
//insert to a list
void insert(int val)
{
  for (struct node *ptr = first; ptr != NULL; ptr = ptr->next)
  {
    if (ptr->data < val)
    {
      struct node *temp = malloc(sizeof(struct node));
      temp->next = ptr->next;
      ptr->next = temp;
    }
  }
  display();
}