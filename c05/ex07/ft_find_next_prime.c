/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:24:00 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/23 18:29:12 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1)
		return (0);
	while (i <= 9)
	{
		if (nb != i && nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 0)
		return (2);
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%i\n", ft_find_next_prime(9));
// 	printf("%i\n", ft_find_next_prime(0));
// 	printf("%i\n", ft_find_next_prime(2));
// 	printf("%i\n", ft_find_next_prime(1));
// 	printf("%i\n", ft_find_next_prime(200));
// }