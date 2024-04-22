/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:07:56 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/23 00:32:28 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	nb;

	negative = 1;
	nb = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			negative = negative * -1;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			if (nb != 0)
				nb = nb * 10;
			nb = nb + (str[i] - 48);
		}
		else if (nb != 0 && (str[i] > '9' || str[i] < '0'))
			return (nb * negative);
		else if (str[i] != ' ' && str[i] != '+')
			if (str[i] > '9' || str[i] < '0')
				return (0);
		i++;
	}
	return (nb * negative);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%i\n", ft_atoi("567"));
// 	printf("%i\n", ft_atoi(" ---+----+1234ab567"));
// 	printf("%i\n", ft_atoi(" s234ab567"));
// 	return (0);
// }