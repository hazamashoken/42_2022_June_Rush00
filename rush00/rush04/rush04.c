#include "ft_putchar.c"

void    ft_print(int a, int b, int w, int h)
{
  if ((a == 0 && b == 0) || (a == h - 1 && b == w - 1 && a != h - 1))
    ft_putchar(65); // A
  else if ((a == 0 && b == w - 1) || (a == h - 1 && b == 0))
    ft_putchar(67); // C
  else if ((a == 0 || a == h - 1) || (b == 0 || b == w - 1))
    ft_putchar(66); // B
  else
    ft_putchar(32); // [space]
}

void    rush(int w, int h)
{
  int a;
  int b;

  a = 0;
  while (a < h)
  {
    b = 0;
    while (b < w)
    {
      ft_print(a, b, w, h);
      b++;
    }
    ft_putchar(10); // \n
    a++;
  }
  ft_putchar(10); // \n
}
