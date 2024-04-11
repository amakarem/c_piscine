/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:36:33 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/11 23:13:25 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_output(int a, int b, int c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if(a == '7' && b == '8' && c == '9') {
		return;
	}
	ft_putchar(',');
	ft_putchar(' ');
}



void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0';
	b = '1';
	c = '2';

	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_output(a, b, c);
				c++;
			}
			c = ++b;
		}
		b = ++a;
	}
}

int	main(void)
{
	ft_print_comb();
}
