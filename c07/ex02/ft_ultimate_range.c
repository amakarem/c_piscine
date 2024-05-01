/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:12:11 by aelaaser          #+#    #+#             */
/*   Updated: 2024/05/01 14:30:43 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	free(array);
	return (i);
}

// #include <stdio.h>
// void	test_ultim_range(int min, int max)
// {
// 	int	**tab;
// 	int	i;

// 	tab = (int **)malloc(sizeof(int *));
// 	printf("%d\n\n", ft_ultimate_range(tab, min, max));
// 	i = 0;
// 	while (i + min < max)
// 	{
// 		printf("%d\n", tab[0][i]);
// 		i++;
// 	}
// 	free(tab);
// }

// int	main(void)
// {
// 	test_ultim_range(0, 11);
// }