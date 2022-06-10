/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:24:13 by tliangso          #+#    #+#             */
/*   Updated: 2022/06/10 16:38:24 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	ft_topbot(int w)
{
	int	i;

	i = 1;
	while (i <= w)
	{
		if(i == 1 || i == w)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
}

void	ft_wall(int w)
{
	int	i;

	i = 1;
	while (i <= w)
	{
		if(i == 1 || i == w)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
}

void	rush(int w, int h)
{
	int	hi;	

	hi = 1;
	while (hi <= h)
	{
		if(hi == 1 | hi ==  h)
			ft_topbot(w);
		else
			ft_wall(w);
		if(hi != h)
			ft_putchar('\n');
		hi++;
	}
	ft_putchar('\n');
}
