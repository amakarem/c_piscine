/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_word_letter.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anantony <anantony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:59:26 by anantony          #+#    #+#             */
/*   Updated: 2024/04/28 13:14:12 by anantony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "hash_map.h"

int	trans_content(char *filename, t_item **items, char *c)
{
	int	fd;
	int	sz;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	sz = read(fd, c, 999);
	c[sz] = '\0';
	populate_array(items, c);
	if (close(fd) < 0)
	{
		return (0);
	}
	return (1);
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

// int	main(int argc, char **argv)
// {
// 	char	*c;
// 	char	array[100][100];

// 	c = (char *)malloc(sizeof(char) * 1000);

// 	trans_content(array, c);
// 	print_content(array);
// 	return (0);
// }

// int	trans_content(char *filename, char array[100][100], char *c)
// {
// 	int	fd;
// 	int	sz;

// 	fd = open(filename, O_RDONLY);
// 	if (fd < 0)
// 	{
// 		return (0);
// 	}

// 	sz = read(fd, c, 999);
// 	c[sz] = '\0';

// 	populate_array(array, c);

// 	if (close(fd) < 0)
// 	{
// 		return (0);
// 	}
// 	return (1);
// }

// void	populate_array(char array[100][100], char *c)
// {
// 	int	counter;
// 	int	inner_counter;
// 	int	inner_str_counter;

// 	counter = 0;
// 	inner_counter = 0;
// 	while (c[counter] != '\0')
// 	{
// 		inner_str_counter = 0;
// 		while (c[counter] != ':')
// 		{
// 			array[inner_counter][inner_str_counter++] = c[counter++];
// 		}
// 		array[inner_counter][inner_str_counter] = '\0';
// 		counter += 2;
// 		inner_counter++;
// 		inner_str_counter = 0;
// 		while (c[counter] != '\n')
// 		{
// 			array[inner_counter][inner_str_counter++] = c[counter++];
// 		}
// 		array[inner_counter++][inner_str_counter] = '\0';
// 		counter++;
// 	}
// }