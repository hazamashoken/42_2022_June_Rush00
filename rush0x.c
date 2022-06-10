void	ft_putchar(char c);
#define head 'A'
#define between 'B'
#define end 'C'
void    rush(int x, int y)
{
    int column;
    int row;

    if (x == 0 || y == 0)
        return ;
    row = 1;
    while (row <= y)
    {
        column = 1;
        while (column <= x)
        {
            if ((column == 1 && row == 1) || (column == 1 && row == y))
                ft_putchar(head);
            else if ((column == x && row == 1) || (column == x && row == y))
                ft_putchar(tail);
            else if ((column > 1 && row == 1) || (column > 1 && row == y))
                ft_putchar(between);
            else if ((column == 1 && row > 1) || (column == x && row < y))
                ft_putchar(between);
            else
                ft_putchar(' ');
            column++;
        }
        ft_putchar('\n');
        row++;
    }
}