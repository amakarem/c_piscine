/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_word_letter.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anantony <anantony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:59:26 by anantony          #+#    #+#             */
/*   Updated: 2024/04/28 22:48:50 by anantony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "../includes/hash_map.h"

int	trans_content(char *filename, t_item ***items)
{
	int		file_descriptor;
	int		size;
	char	*buffer;

	buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor < 0)
		return (0);

	size = read(file_descriptor, buffer, BUFFER_SIZE);
	buffer[size] = '\0';

	size = dict_size_counter(buffer);
	*items = (t_item **)malloc(size * sizeof(t_item *));

	populate_array(items, buffer);
	close(file_descriptor);
	free(buffer);
	return (size);
}

int	dict_size_counter(char *c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (c[i] != '\0')
	{
		while (c[i] == ' ')
			i++;
		if (c[i] == '\n')
			size++;
		if (c[i] == '\n' && c[i + 1] == '\n')
			size--;
		i++;
	}

	return (size);
}

void	print_content(char array[100][100])
{
	int	counter;
	int	inner_counter;
	int	num_lines;

	counter = 0;
	inner_counter = 0;
	num_lines = 0;
	while (array[num_lines][0] != '\0')
	{
		num_lines++;
	}
	counter = 0;
	while (counter < num_lines)
	{
		inner_counter = 0;
		while (array[counter][inner_counter] != '\0')
		{
			write(1, &array[counter][inner_counter], 1);
			inner_counter++;
		}
		write(1, "\n", 1);
		counter++;
	}
}
