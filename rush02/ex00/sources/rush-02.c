/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anantony <anantony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:17:39 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/28 22:49:33 by anantony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "../includes/hash_map.h"

char	*num_str(int n)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * 1000);
	i = 1;
	str[0] = '1';
	while (i < n)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	ft_num_text(char *str, t_item ***item_array, char *output)
{
	int		len;
	char	temp[12];
	char	tmptext[12];

	len = str_lenth(str);
	if ((len == 1) || (len == 2 && str[0] == '1')
		|| (len == 2 && str[1] == '0'))
		ft_putstr(linear_search(*item_array, 100, str));
	else if (len == 2)
	{
		temp[0] = str[0];
		temp[1] = '0';
		temp[2] = '\0';
		tmptext[0] = str[1];
		tmptext[1] = '\0';
		output = ft_strcpy_rev(linear_search(*item_array, 100, temp),
				linear_search(*item_array, 100, tmptext));
		ft_putstr(output);
	}
	else if (len >= 3)
	{
		tmptext[0] = str[len - 1];
		tmptext[1] = '\0';
		output = ft_strcpy_rev(linear_search(*item_array, 100, num_str(len)),
				linear_search(*item_array, 100, tmptext));
		tmptext[0] = str[0];
		tmptext[1] = '\0';
		output = ft_strcpy_rev(linear_search(*item_array, 100, tmptext),
				linear_search(*item_array, 100, "output"));
		ft_putstr(output);
	}
	ft_putstr("\n");
}

void	free_item_array(t_item **item_array, int array_size)
{
	int	i;

	i = 0;
	while (i < array_size)
	{
		free(item_array[i]->key);
		free(item_array[i]->value);
		free(item_array[i]);
		i++;
	}
	free(item_array);
}

int	main(int argc, char *argv[])
{
	int		input;
	int		array_size;
	char	*filename;
	char	*output;
	t_item	**item_array;

	output = (char *)malloc(sizeof(char) * 1000);
	filename = "numbers.dict";
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
	array_size = trans_content(filename, &item_array);
	if (array_size == 0)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	//output = ft_strcpy_rev(linear_search(item_array, 100, "5"), "hundered-twinty-two");
	//ft_putstr(output);
	ft_num_text(argv[input], &item_array, output);
	// free(output);
	free_item_array(item_array, array_size);
	return (0);
}
