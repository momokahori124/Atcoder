#include <stdio.h>
#include <stdlib.h>

int sum(int *save, int n, int p)
{
  int i;
  int sum;
  
  sum = 0;
  i = 0;
  while (i < n)
  {
    sum += (save[i] - p) * (save[i] - p);
    i++;
  }
  return (sum);
}

int ft_min(int *save, int n)
{
  int min;
  int i;
  
  i = 0;
  min = save[0];
  while (i < n)
  {
    if (min > save[i])
       min = save[i];
    i++;
  }
  return (min);
}

int ft_max(int *save, int n)
{
  int max;
  int i;
  
  i = 0;
  max = save[0];
  while (i < n)
  {
    if (max < save[i])
       max = save[i];
    i++;
  }
  return (max);
}

int main()
{
  int n;
  int i;
  int min;
  int *save;
  int p;
  
  scanf("%d", &n);
  
  save = (int *)malloc(sizeof(int) * n);
  
  i = 0;
  while (i < n)
  {
    scanf("%d", &save[i]);
    i++;
  }
  
  if (n == 1)
  {
    printf("%d", 0);
    return (0);
  }  
  p = ft_min(save, n);
  min = sum(save, n, p);
  p++;
  while (p <= ft_max(save, n))
  {
     if (min > sum(save, n, p))
     {
       min = sum(save, n, p);
     }
    p++;
  }
  
  printf("%d", min);
  return (0);
}

