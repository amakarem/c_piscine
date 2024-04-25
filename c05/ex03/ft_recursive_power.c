/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:51:05 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/25 18:24:04 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power == 0))
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%i\n", ft_recursive_power(0, 0));
// 	printf("%i\n", ft_recursive_power(6, 0));
// 	printf("%i\n", ft_recursive_power(0, 6));
// 	printf("%i\n", ft_recursive_power(6, 6));
// 	printf("%i\n", ft_recursive_power(6, -6));
// }