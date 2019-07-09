#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_iterative_factorial(int nb)
{
  int total;
  total = 1;
  
  if (nb < 0)
      return (0);
  while (nb > 0)
  {
    
    total = total * nb;
    nb--;
  }
  return (total);
}

int main(void)
{
  int n;
  n = ft_iterative_factorial(-10);
  printf("%d ", n);
}
