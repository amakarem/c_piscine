/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:56:16 by aelaaser          #+#    #+#             */
/*   Updated: 2024/05/01 14:10:17 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * ((max - min) + 1));
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int *array;
// 	int	i;

// 	array = ft_range(1000,11000);
// 	i = 0;
// 	while (array[i] != '\0')
// 	{
// 		printf("%d\n", array[i]);
// 		i++;
// 	}
// 	free(array);
// 	return (0);
// }