#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_iterative_power(int nb, int power)
{
  int total;
  total = 1;
  if (power < 0)
    return (0);
  while (power > 0)
  {
    total = total * nb;
    power--;
  }
  return (total);
}

int main(void)
{
  printf("%d", ft_iterative_power(3, 3));
}
