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
//   display();
  insert(20);
//   printf("new \n");
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
//insert to a list
void insert(int val)
{
  for (struct node *ptr = first; ptr != NULL; ptr = ptr->next)
  {
//     printf("ok\n");
    if (ptr->next==NULL)
    {
      struct node *temp = malloc(sizeof(struct node));
      temp->data=val;
      temp->next = ptr->next;
      ptr->next = temp;
    }
    ptr=ptr->next;
  }
//   display();
}
