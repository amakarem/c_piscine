/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   rush01.c										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: aelaaser <aelaaser@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/04/12 22:30:52 by aelaaser		  #+#	#+#			 */
/*   Updated: 2024/04/13 14:30:09 by aelaaser		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	v;
	int	h;

	v = 1;
	while (v <= y)
	{
		h = 1;
		while (h <= x)
		{
			if (h == 1)
			{
				first_char(x, y, h, v);
			}
			else if (h == x)
			{
				last_char(x, y, h, v);
			}
			else
			{
				mid_char(x, y, h, v);
			}
			h++;
		}
		v++;
	}
}

void	first_char(int x, int y, int h, int v)
{
	if (v == 1)
	{
		ft_putchar('/');
	}
	else if (v == y)
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('*');
	}
}

void	mid_char(int x, int y, int h, int v)
{
	if (v != y && v != 1)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
	}
}

void	last_char(int x, int y, int h, int v)
{
	if (v == 1)
	{
		ft_putchar('\\');
	}
	else if (v == y)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('*');
	}
	ft_putchar('\n');
}
