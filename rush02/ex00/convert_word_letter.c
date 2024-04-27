/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_word_letter.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:59:26 by anantony          #+#    #+#             */
/*   Updated: 2024/04/27 20:57:33 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void	trans_content(char *filename, char array[100][100], char *c);
void	populate_array(char array[100][100], char *c);
void	print_content(char array[100][100]);

int	str_lenth(char **argv)
{
	int	length;
	int	counter;

	length = 0;
	counter = 0;
	while (argv[1][counter] != '\0')
	{
		length++;
		counter++;
	}

	return (length);
}

void	trans_content(char *filename, char array[100][100], char *c)
{
	int	fd;
	int	sz;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		perror("r1");
		return ;
	}

	sz = read(fd, c, 999);
	c[sz] = '\0';

	populate_array(array, c);

	if (close(fd) < 0)
	{
		perror("c1");
		return ;
	}
}

void	populate_array(char array[100][100], char *c)
{
	int	counter;
	int	inner_counter;
	int	inner_str_counter;

	counter = 0;
	inner_counter = 0;
	while (c[counter] != '\0')
	{
		inner_str_counter = 0;
		while (c[counter] != ':')
		{
			array[inner_counter][inner_str_counter++] = c[counter++];
		}
		array[inner_counter][inner_str_counter] = '\0';
		counter += 2;
		inner_counter++;
		inner_str_counter = 0;
		while (c[counter] != '\n')
		{
			array[inner_counter][inner_str_counter++] = c[counter++];
		}
		array[inner_counter++][inner_str_counter] = '\0';
		counter++;
	}
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
