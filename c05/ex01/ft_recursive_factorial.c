/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:24:00 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/23 15:37:57 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 33)
		return (0);
	else if (nb == 0 || nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%i\n", ft_recursive_factorial(50));
// 	printf("%i\n", ft_recursive_factorial(1));
// 	printf("%i\n", ft_recursive_factorial(-1));
// 	printf("%i\n", ft_recursive_factorial(33));
// }