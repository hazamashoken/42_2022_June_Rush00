#include "ft_putchar.c"

void    ft_print(int x, int y, int w, int h)
{
  if ((y == 0 && x == 0) || (w > 1 && y == h - 1 && x == w - 1))
    ft_putchar(65);
  else if ((y == 0 && x == w - 1) || (y == h - 1 && x == 0))
    ft_putchar(67);
  else if ((y == 0 || y == h - 1) || (x == 0 || x == w - 1))
    ft_putchar(66);
  else
    ft_putchar(32);
}

void    rush(int w, int h)
{
  int x;
  int y;

  y = 0;
  while (y < h)
  {
    x = 0;
    while (x < w)
    {
      ft_print(x, y, w, h);
      x++;
    }
    ft_putchar(10);
    y++;
  }
}
