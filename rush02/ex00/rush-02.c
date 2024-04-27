/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:17:39 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/27 20:58:06 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_putstr(char *str);
int	check_is_valid(char *str);
void	trans_content(char *filename, char array[100][100], char *c);
void	populate_array(char array[100][100], char *c);
void	print_content(char array[100][100]);

int main(int argc, char *argv[])
{
	int	input;
	char	*filename = "numbers.dict";
	char	*c;
	char	array[100][100];

	input = 1;
	if (argc == 3)
	{
		filename = argv[input];
		input = 2;
	}
	else if (argc < 2)
		ft_putstr("Error\n");
	else if (check_is_valid(argv[input]) == 0)
		ft_putstr("Error\n");

	c = (char *)malloc(sizeof(char) * 1000);

	trans_content(filename, array, c);
	//print_content(array);

	return (0);
}
