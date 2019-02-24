#include <stdio.h>
#include <stdlib.h>

void insert(int *a, int value, int *size);

int main(void)
{
  int *a = malloc(sizeof(int));
  int size = 0, capacity = 0;

  while (1)
  {
    int num;
    scanf("%i", &num);
    if (num == -1)
    {
      break;
    }
    a[size] = num;
    if (size == capacity)
    {
      a = realloc(a, (size + 1) * sizeof(int));
      size++;
      capacity++;
    }
  }
  for (int i = 0; i < capacity; i++)
  {
    printf("%i\n", a[i]);
  }

  printf("Enter the value to insert:");
  int val;
  scanf("%i", &val);
  insert(a, val, &size);
  capacity = size;
  printf("After insertion\n");
  for (int i = 0; i < capacity; i++)
  {
    printf("%i\n", a[i]);
  }
}

void insert(int *a, int value, int *size)
{
  int *b = realloc(a, ((*size) + 1) * sizeof(int));
  b[*size] = value;
  *a = *b;
  *size += 1;
}