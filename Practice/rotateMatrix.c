#include <stdio.h>

int main(void)
{

  int n = 3, m[n][n], r[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%i", &m[i][j]);
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      r[j][n - 1 - i] = m[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%i ", r[i][j]);
    }
    printf("\n");
  }
}