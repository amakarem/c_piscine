/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:22:29 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/24 16:12:56 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	calc;

	i = 1;
	calc = 1;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (calc <= nb)
	{
		i++;
		if (i > 46340)
			return (0);
		calc = i * i;
	}
	i = i - 1;
	if ((i * i) != nb)
		return (0);
	return (i);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%i\n", ft_sqrt(9));
// 	printf("%i\n", ft_sqrt(0));
// 	printf("%i\n", ft_sqrt(2));
// 	printf("%i\n", ft_sqrt(1));
// 	printf("%i\n", ft_sqrt(10000));
// }