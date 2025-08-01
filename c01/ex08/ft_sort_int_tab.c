/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:08:45 by aelaaser          #+#    #+#             */
/*   Updated: 2025/07/19 14:49:33 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);
// {
// 	int	x;

// 	x = *a;
// 	*a = *b;
// 	*b = x;
// }

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;

	i = 0;
	while (i < size)
	{
		x = 0;
		while (x < size)
		{
			if (tab[i] < tab[x])
			{
				ft_swap(&tab[i], &tab[x]);
			}
			x++;
		}
		i++;
	}
}

/* to test uncomment
#include <stdio.h>

int	main(void)
{
	int	i = 0;
	int tab[] = {9, 1, 4, 3, 2, 5, 7, 6, 8};
	int size = 9;

	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/