/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trial_hash_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anantony <anantony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:25:42 by anantony          #+#    #+#             */
/*   Updated: 2024/04/28 22:49:02 by anantony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "../includes/hash_map.h"

int		ft_strcmp(const char *s1, const char *s2);
char	*linear_search(t_item **items, int size, const char *key);
char	*ft_strdup(char *src);

char	*linear_search(t_item **items, int size, const char *key)
{
	int	counter;

	counter = 0;
	while (counter < size)
	{
		if (ft_strcmp(items[counter]->key, key) == 0)
		{
			return (items[counter]->value);
		}
		counter++;
	}
	return ("");
}

t_item	*create_item(char *key, char *value, int size)
{
	t_item	*new_item;

	new_item = malloc(sizeof(t_item));
	if (new_item == NULL)
	{
		return (NULL);
	}
	new_item->key = ft_strdup(key);
	new_item->value = ft_strdup(value);
	new_item->size = size;
	if (new_item->key == NULL || new_item->value == NULL)
	{
		free(new_item);
		return (NULL);
	}
	return (new_item);
}

void	populate_array(t_item ***items, char *c)
{
	int		counter;
	int		inner_counter;
	int		inner_str_counter;
	char	temp_key[100];
	char	temp_value[100];

	counter = 0;
	inner_counter = 0;
	while (c[counter] != '\0')
	{
		inner_str_counter = 0;
		while (c[counter] != ':')
			temp_key[inner_str_counter++] = c[counter++];
		temp_key[inner_str_counter++] = '\0';
		counter += 2;
		inner_str_counter = 0;
		while (c[counter] != '\n')
			temp_value[inner_str_counter++] = c[counter++];
		temp_value[inner_str_counter++] = '\0';
		(*items)[inner_counter++] = create_item(temp_key, temp_value,
				str_lenth(temp_key));
		counter++;
	}
}