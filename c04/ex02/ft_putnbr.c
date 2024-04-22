/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:52:21 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/22 21:06:38 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_d(int i)
{
	int	d;

	d = 1;
	while (i > 0)
	{
		d = d * 10;
		i--;
	}
	if (d > 1)
	{
		d = d / 10;
	}
	return (d);
}

int	ft_nb_len(int nb)
{
	int	len;
	int	i;

	len = 0;
	i = nb;
	if (i < 0)
	{
		i = i * -1;
	}
	while (i > 0)
	{
		len++;
		i = i / 10;
	}
	return (len);
}

void	ft_putnbr(int nb)
{
	int		len;
	int		i;
	char	c;

	len = ft_nb_len(nb);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (len == 0)
		write(1, "0", 1);
	else
	{
		i = nb;
		while (len > 0)
		{
			c = (i / ft_d(len)) + 48;
			write(1, &c, 1);
			i = i - (ft_d(len) * (i / ft_d(len)));
			len--;
		}
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	//ft_putnbr(-4200);
// 	ft_putnbr(42);
// 	return (0);
// }
