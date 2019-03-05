#include <stdio.h>
#include <stdlib.h>

#include "binary.h"

int insert(int val, struct node *root);

struct node *root = NULL;

int main(void)
{
  struct node *root = malloc(sizeof(node));
  root->data = 10;
  root->right = NULL;
  root->left = NULL;
  insert(11, root);
  insert(12, root);
  insert(9, root);
  insert(1, root);
}

int insert(int val, struct node *root)
{
  if (root == NULL)
  {
    root = malloc(sizeof(node));
    root->data = val;
    root->right = NULL;
    root->left = NULL;

    return 0;
  }
  else if (root->data > val)
  {
    printf("data=%i \n", root->data);
    return insert(val, root->left);
  }
  else if (root->data < val)
  {
    printf("data=%i \n", root->data);
    return insert(val, root->right);
  }
  else
  {
    return 1;
  }
}