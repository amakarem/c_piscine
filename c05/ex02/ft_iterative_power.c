/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:40:02 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/23 15:49:06 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb + power == 0 || power < 0)
		return (0);
	while (power > 0)
	{
		result = (result * nb);
		power--;
	}
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%i\n", ft_iterative_power(6, 3));
// }