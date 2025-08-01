/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etina <etina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:26:07 by etina             #+#    #+#             */
/*   Updated: 2024/04/13 22:07:31 by etina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	beg_end(int y, int line_n)
{
	if (line_n == 1)
	{
		ft_putchar('A');
	}
	else if (line_n == y)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	middle(int x, int line_n)
{
	if (line_n == 1 || line_n == x)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
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
			if (char_n == 1 || char_n == x)
			{
				beg_end(y, line_n);
			}
			else
			{
				middle(y, line_n);
			}
			char_n++;
		}
		ft_putchar('\n');
		line_n++;
	}
}
