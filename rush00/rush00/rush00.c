/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:24:13 by tliangso          #+#    #+#             */
/*   Updated: 2022/06/11 21:10:04 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"


/*
@breif			print out top 'o----o' and bottom part of the box
@param	int	w	width of the box
@return	void
*/
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

/*
@brief			print wall '|'  and blank ' ' for the box body
@param	int	w	width of the box
@return void
*/
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

/*
@breif			call ft_topbot or ft_wall depend on the height if height is 0 or max
@param	int	w	width of the box
@param	int	h	height of the box
@return	void
*/
void	rush(int w, int h)
{
	int	hi;	

	hi = 1;
	while (hi <= h)
	{
		if(hi == 1 || hi ==  h)
			ft_topbot(w);
		else
			ft_wall(w);
		ft_putchar('\n');
		hi++;
	}
}
