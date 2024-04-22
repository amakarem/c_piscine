/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:52:21 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/23 00:14:48 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_maxint(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb = 147483648;
	}
	else if (nb == 2147483647)
	{
		write(1, "2", 1);
		nb = 147483647;
	}
	return (nb);
}

void	print_nbr(int nb)
{
	char	str[12];
	int		i;

	while (nb != 0)
	{
		str[i] = (nb % 10) + 48;
		nb = (nb / 10);
		i++;
	}
	str[i] = '\0';
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	nb = ft_maxint(nb);
	if (nb < 0)
	{
		write(1, "-", 1);
		print_nbr(nb * -1);
	}
	else if (nb == 0)
		write(1, "0", 1);
	else
		print_nbr(nb);
}

// int	main(void)
// {
// 	ft_putnbr(2147483647);
// 	return (0);
// }