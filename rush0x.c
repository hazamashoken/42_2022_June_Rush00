void	ft_putchar(char c);

void    rush(int x, int y)
{
    int i;
    int j;
    int count;

    count = 1;

    if (x == 0 || y == 0)
        return ;
    j = 1;
    while (j <= y)
    {
        i = 1;
        while (i <= x)
        {
            if ((i == 1 && j == 1) || (i == 1 && j == y))
                ft_putchar('A');
            else if ((i == x && j == 1) || (i == x && j == y))
                ft_putchar('C');
            else if ((i > x && j == 1) || (i > x && j == y))
                ft_putchar('B');
            else
                ft_putchar(' ');
            i += 1;
        }
        ft_putchar("/n");
        j += 1;
    }
}