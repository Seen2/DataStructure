#include <stdio.h>

int main(void)
{
  int n = 3, m[n][n], flag = 0;
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
      if (m[i][j] == 0)
      {
        flag = 1;
        break;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (flag == 1)
      {
        m[i][j] = 0;
      }
      printf("%i ", m[i][j]);
    }
    printf("\n");
  }
}