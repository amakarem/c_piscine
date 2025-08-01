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

/* x = number of characters in line */
/* y = number of lines */
/* line_n = current line number */
/* char_n = current character */

void	ft_putchar(char c);

void	first_char(int x, int y, int line_n)
{
	if (line_n == 1)
	{
		ft_putchar('/');
	}
	else if (line_n == y)
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('*');
	}
	if (x == 1)
	{
		ft_putchar('\n');
	}
}

void	mid_char(int y, int line_n)
{
	if (line_n != y && line_n != 1)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
	}
}

void	last_char(int y, int line_n)
{
	if (line_n == 1)
	{
		ft_putchar('\\');
	}
	else if (line_n == y)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line_n;
	int	char_n;

	line_n = 1;
	while (line_n <= y)
	{
		char_n = 1;
		while (char_n <= x)
		{
			if (char_n == 1)
			{
				first_char(x, y, line_n);
			}
			else if (char_n == x)
			{
				last_char(y, line_n);
			}
			else
			{
				mid_char(y, line_n);
			}
			char_n++;
		}
		line_n++;
	}
}
