#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int uniCheck(char *s, char c, int it);

int main(void)
{
  char *s = malloc(10 * sizeof(char));
  printf("Enter a String:");
  scanf("%s", s);

  printf("\n");
  if (uniCheck(s, '-', 0) == 0)
  {
    printf("string is of unique char\n");
  }
  else
  {
    printf("\n string isn't of unique char\n");
  }
}

int uniCheck(char *s, char c, int it)
{
  int n = strlen(s);
  for (int i = it; i < n; i++)
  {
    if (s[i] == c)
    {
      return 1;
    }
  }
  if (it == n - 1)
  {
    return 0;
  }
  else
  {
    for (int i = it; i < n - 1; i++)
    {

      return uniCheck(s, s[i], i + 1);
    }
  }
}