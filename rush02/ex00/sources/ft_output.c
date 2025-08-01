/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anantony <anantony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 20:38:43 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/28 22:48:53 by anantony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] != '\0' && s2[counter] != '\0')
	{
		if (s1[counter] != s2[counter])
		{
			return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
		}
		counter++;
	}
	return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
}

char	*ft_strdup(char *src)
{
	int		src_length;
	char	*char_array;

	src_length = 0;
	while (src[src_length] != '\0')
		src_length++;
	char_array = (char *) malloc(sizeof(char) * (src_length + 1));
	if (!char_array)
		return (NULL);
	src_length = 0;
	while (src[src_length] != '\0')
	{
		char_array[src_length] = src[src_length];
		src_length++;
	}
	char_array[src_length] = '\0';
	return ((char *)char_array);
}

int	str_lenth(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
