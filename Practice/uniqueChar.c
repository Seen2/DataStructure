#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  char *s = "shintus";
  int n = strlen(s);
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (s[i] == s[j])
      {
        printf("< %c >  occurs more than ones  \n", s[i]);
        printf("so string isn't unique\n");
        exit(0);
      }
    }
  }
  printf("\n");
}
