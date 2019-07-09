#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_recursive_factorial(int nb)
{
  int n;
  int total;

  total = 1;
  if (nb < 0)
  {
    return (0);
  }
  if (nb == 1 || nb == 0)
    return (total);
  n = nb - 1;
  total = nb * ft_recursive_factorial(n);
  return (total);
}

int main(void)
{
  printf("%d", ft_recursive_factorial(-10));
}
