/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newrush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpatomwo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:06:36 by rpatomwo          #+#    #+#             */
/*   Updated: 2022/06/10 17:22:58 by rpatomwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	r;

	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((c == 1 && r == 1) || (c == 1 && r == y))
				ft_putchar('A');
			else if ((c == x && r == 1) || (c == x && r == y))
				ft_putchar('C');
			else if (r == 1 || c == 1 || r == y || c == x )
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
