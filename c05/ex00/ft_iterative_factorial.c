/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:09:33 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/23 15:25:38 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int result;
	int factorial;

	result = 1;
	factorial = 1;
	if (nb < 0 || nb > 33)
		return (0);
	else if (nb == 0)
		nb = 1;
	while (factorial <= nb)
	{
		result = result * factorial;
		factorial++;
	}
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%i\n", ft_iterative_factorial(50));
// 	printf("%i\n", ft_iterative_factorial(1));
// 	printf("%i\n", ft_iterative_factorial(-1));
// 	printf("%i\n", ft_iterative_factorial(33));
// }