/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrandt <jbrandt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:56:49 by jbrandt           #+#    #+#             */
/*   Updated: 2024/04/13 20:31:04 by jbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_char(int x, int y, int line)
{
	if (line == 1 || line == y)
	{
		ft_putchar('o');
	}
	else
	{
		ft_putchar('|');
	}
	if (x == 1)
	{
		ft_putchar('\n');
	}
}

void	mid_char(int y, int line)
{
	if (line != y && line != 1)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('-');
	}
}

void	last_char(int y, int line)
{
	if (line == 1 || line == y)
	{
		ft_putchar('o');
	}
	else
	{
		ft_putchar('|');
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
