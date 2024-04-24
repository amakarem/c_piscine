/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:14:39 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/24 16:19:33 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb != i && nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%i\n", ft_is_prime(9));
// 	printf("%i\n", ft_is_prime(0));
// 	printf("%i\n", ft_is_prime(2));
// 	printf("%i\n", ft_is_prime(1));
// 	printf("%i\n", ft_is_prime(200));
// }