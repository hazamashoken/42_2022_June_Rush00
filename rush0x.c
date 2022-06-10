void	ft_putchar(char c);
#define head 'A'
#define between 'B'
#define tail 'C'
void    rush(int x, int y)
{
    int c;
    int r;

    if (x == 0 || y == 0)
        return ;
    r = 1;
    while (r <= y)
    {
        c = 1;
        while (c <= x)
        {
            if ((c == 1 && r == 1) || (c == 1 && r == y))
                ft_putchar(head);
            else if ((c == x && r == 1) || (c == x && r == y))
                ft_putchar(tail);
            else if ((c > 1 && r == 1) || (c > 1 && r == y) || (c == 1 && r > 1) || (c == x && r < y))
                ft_putchar(between);
            else
                ft_putchar(' ');
            c++;
        }
        ft_putchar('\n');
        r++;
    }
}