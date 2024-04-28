/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anantony <anantony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:17:39 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/28 15:16:28 by anantony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "hash_map.h"

// char	core_work(char *input, t_item **items, int size)
// {
// 	char	*temp;
// 	int		counter;
// 	int		size;
// 	int		current_index_value;
// 	int		current_base;

// 	temp = str_length(input);
// 	while (input)
// 	{
// 	}
// 	return (NULL);
// }

char	*ft_strcpy_rev(char *src, char *dest)
{
	char	*tmp;
	int		i;
	int		x;

	i = 0;
	while (src[i] != '\0')
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = '-';
	i++;
	x = 0;
	while (dest[x] != '\0')
	{
		tmp[i] = dest[x];
		i++;
		x++;
	}
	tmp[i] = '\0';
	return (tmp);
}

int	main(int argc, char *argv[])
{
	int		input;
	char	*filename;
	char	*c;
	t_item	*item_array[100];

	filename = "numbers.dict";
	c = (char *)malloc(sizeof(char) * 1000);
	input = 1;
	if (argc == 3)
	{
		filename = argv[input];
		input = 2;
	}
	if (argc < 2 || check_is_valid(argv[input]) == 0)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (trans_content(filename, item_array, c) == 0)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	// core_work(argv[input], item_array, );
	// ft_putstr(ft_strcpy_rev("one", "hundered-twinty-two"));

	ft_putstr(linear_search(item_array, 100, "5"));


	return (0);
}
