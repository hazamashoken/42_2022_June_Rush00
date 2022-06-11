#include "ft_putchar.c"

/*
@breif			print out top 'o----o' and bottom part of the box
@param	int	w	width of the box
@return	void
*/
void	ft_topbot(int w, int h, int hi)
{
	int	i;

	i = 1;
	while (i <= w)
	{
		if(i == 1 || i == w)
		{
			if (hi == 1)
				ft_putchar('A');
			else if(hi == h)
				ft_putchar('C');
		}
		else
			ft_putchar('B');
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
			ft_putchar('B');
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
		if(hi == 1 | hi ==  h)
			ft_topbot(w, h, hi);
		else
			ft_wall(w);
		if(hi != h)
			ft_putchar('\n');
		hi++;
	}
	ft_putchar('\n');
}
