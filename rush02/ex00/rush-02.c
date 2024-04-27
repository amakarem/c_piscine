/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:17:39 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/27 22:32:13 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_putstr(char *str);
int	check_is_valid(char *str);
int	trans_content(char *filename, char array[100][100], char *c);
int	str_lenth(char *str);
void	populate_array(char array[100][100], char *c);
void	print_content(char array[100][100]);


char	*ft_strcpy_rev(char *src, char *dest)
{
	char	*tmp;
	int	i;
	int x;

	i = 0;
	while(src[i] != '\0')
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = '-';
	i++;
	x = 0;
	while(dest[x] != '\0')
	{
		tmp[i] = dest[x];
		i++;
		x++;
	}
	tmp[i] = '\0';
	return (tmp);
}

int main(int argc, char *argv[])
{
	int	input;
	char	*filename = "numbers.dict";
	char	*c;
	char	array[100][100];

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
	if (trans_content(filename, array, c) == 0)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	ft_putstr(ft_strcpy_rev("hundered", "twinty-two"));
	return (0);
}
