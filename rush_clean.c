/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_clean.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpatomwo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:18:50 by rpatomwo          #+#    #+#             */
/*   Updated: 2022/06/10 16:29:21 by rpatomwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define HEAD 'A'
#define BETWEEN 'B'
#define TAIL 'C'

void	ft_putchar(char c)
void	rush(int x, int y)
{
	int c;
       	int r;

    if (x == 0 || y == 0)
        return;
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
            else if (r == 1 || c == 1 || r == y || c == x)
                ft_putchar(between);
            else
                ft_putchar(' ');
            c++;
        }
        ft_putchar('\n');
        r++;
    }
}
