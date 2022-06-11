// #include "ft_putchar.c"

void    print_top(int column)
{
    int i;

    i = 0;
    while (i < column)
    {
        if (i == 0)
        {
            ft_putchar('/');
        }
        else if (i == column - 1)
        {
            ft_putchar('\\');
        }
        else
        {
            ft_putchar('*');
        }
        i++;
    }
    ft_putchar('\n');
}

void    print_middle(int column, int row)
{
    int i;
    int j;

    i = 0;
    while (i < row - 2)
    {
        j = 0;
        while (j < column)
        {
            if ((j == 0) || (j == column - 1))
            {
                ft_putchar('*');
            }
            else
            {
                ft_putchar(' ');
            }
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

void    print_bottom(int column)
{
    int i;

    i = 0;
    while (i < column)
    {
        if (i == 0)
        {
            ft_putchar('\\');
        }
        else if (i == column - 1)
        {
            ft_putchar('/');
        }
        else
        {
            ft_putchar('*');
        }
        i++;
    }
    ft_putchar('\n');
}

void    rush(int column, int row)
{
    if (row > 0)
    {
        print_top(column);
    }
    if (row > 2)
    {
        print_middle(column, row);
    }
    if (row >= 2)
    {
        print_bottom(column);
    }
}