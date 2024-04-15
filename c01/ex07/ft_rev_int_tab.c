/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:57:14 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/15 20:06:04 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp_value;
	int	i;

	i = 0;
	size = size - 1;
	while (i < (size / 2))
	{
		tmp_value = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp_value;
		size--;
		i++;
	}
	return ;
}

/* to test uncomment
#include <stdio.h>

int	main(void)
{
	int	i = 0;
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	int size = 9;

	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/