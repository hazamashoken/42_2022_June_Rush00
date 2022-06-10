void	ft_putchar(char c);

void    rush(int x, int y)
{
    int count_horizon;
    int count_vertical;
    int count;

    count = 1;
    if (x == 0 || y == 0)
        return ;
    count_vertical = 1;
    while (count_vertical <= y)
    {
        count_horizon = 1;
        while (count_horizon <= x)
        {
            if ((count_horizon == 1 && count_vertical == 1) || (count_horizon == 1 && count_vertical == y))
                ft_putchar('A');
            else if ((count_horizon == x && count_vertical == 1) || (count_horizon == x && count_vertical == y))
                ft_putchar('C');
            else if ((count_horizon > 1 && count_vertical == 1) || (count_horizon > 1 && count_vertical == y) || (count_horizon = 1 && count_vertical > 1 && count_vertical < y) || (count_horizon = x && count_vertical > 1 && count_vertical < y))
                ft_putchar('B');
            else
                ft_putchar(' ');
            count_horizon++;
        }
        ft_putchar('\n');
        count_vertical++;
    }
}