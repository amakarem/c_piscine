/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_word_letter_backup.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anantony <anantony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:59:26 by anantony          #+#    #+#             */
/*   Updated: 2024/04/27 17:27:35 by anantony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

// #define FILENAME_SIZE 100
// #define MAX_LINE 100

void	trans_content(char array[100][100], char *c);
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

// void print_str(int length)
// {
// 	if (length == 2)
// 	{

// 	}
// 	else if (length == 3)
// 	{

// 	}

// 	printf("size: %s");
// }

// void	convert_number_string(char **argv)
// {
// }

// int	main(int argc, char **argv)
// {
// 	char	c;
// 	int		bytes;
// 	int		read_document;

// 	read_document = open("numbers.dict", O_RDONLY);

// 	if (read_document == -1)
// 	{
// 		printf("File won't open\n");
// 		return (-1);
// 	}

// 	while ((bytes == read(read_document, &c, sizeof(c))) > 0)
// 	{
// 		if (c == '.')
// 		{
// 			c = '!';
// 		}
// 		write(read_document, &c, sizeof(c));
// 	}

// 	close(read_document);
// 	return (0);
// }

void	trans_content(char array[100][100], char *c)
{
	int	fd;
	int	sz;

	fd = open("numbers.dict", O_RDONLY);
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
		exit(1);
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
			array[inner_counter][inner_str_counter] = c[counter];
			inner_str_counter++;
			counter++;
		}
		array[inner_counter][inner_str_counter] = '\0';

		counter += 2;
		inner_counter++;
		inner_str_counter = 0;
		while (c[counter] != '\n')
		{
			array[inner_counter][inner_str_counter] = c[counter];
			inner_str_counter++;
			counter++;
		}
		array[inner_counter][inner_str_counter] = '\0';
		inner_counter++;
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

int	main(int argc, char **argv)
{
	char	*c;
	char	array[100][100];

	c = (char *)malloc(sizeof(char) * 1000);

	trans_content(array, c);
	print_content(array);
	return (0);
}


// int	main(int argc, char **argv)
// {
// 	int		counter;
// 	int		inner_counter;
// 	int		inner_str_counter;
// 	int		fd;
// 	int		sz;
// 	char	*c;
// 	char	array[100][100];

// 	c = (char *)malloc(sizeof(char) * 1000);
// 	fd = open("numbers.dict", O_RDONLY);

// 	if (fd < 0)
// 	{
// 		perror("r1");
// 		exit(1);
// 	}

// 	sz = read(fd, c, 999);
// 	c[sz] = '\0';

// 	counter = 0;
// 	inner_counter = 0;
// 	while (c[counter] != '\0')
// 	{
// 		inner_str_counter = 0;
// 		while (c[counter] != ':')
// 		{
// 			array[inner_counter][inner_str_counter] = c[counter];
// 			inner_str_counter++;
// 			counter++;
// 		}
// 		array[inner_counter][inner_str_counter] = '\0';

// 		counter += 2;
// 		inner_counter++;
// 		inner_str_counter = 0;
// 		while (c[counter] != '\n')
// 		{
// 			array[inner_counter][inner_str_counter] = c[counter];
// 			inner_str_counter++;
// 			counter++;
// 		}
// 		array[inner_counter][inner_str_counter] = '\0';
// 		inner_counter++;
// 		counter++;
// 	}

// 	if (close(fd) < 0)
// 	{
// 		perror("c1");
// 		exit(1);
// 	}
// 	print_content(array);
// 	return (0);
// }