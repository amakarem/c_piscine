/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:28:20 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/20 22:24:47 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	g_matrix[4][4];
int	g_output[4][4];

void	ft_print_output(int arr[4][4]);
void	ft_printf(char *str);

int	ft_validate(int validate_input)
{
	int	col;
	int	sumval;

	col = 0;
	sumval = 0;
	while (col < 4)
	{
		sumval = g_matrix[0][col] + g_matrix[1][col];
		if (sumval > 5 || sumval < 3)
		{
			return (sumval);
		}
		sumval = g_matrix[2][col] + g_matrix[3][col];
		if (sumval > 5 || sumval < 3)
		{
			return (sumval);
		}
		col++;
	}
	return (validate_input);
}

int	ft_format(char *str)
{
	int	col;
	int	row;
	int	i;
	int	validate_input;

	validate_input = 0;
	col = 0;
	row = 0;
	i = 0;
	while (str[i] && str[i] != '\0' && row < 4)
	{
		if (str[i] >= '0' && str[i] <= '9' && col < 4)
		{
			g_matrix[row][col] = (int)(str[i] - 48);
			validate_input++;
			col++;
			if (col == 4)
			{
				row++;
				col = 0;
			}
		}
		i++;
	}
	return (validate_input);
}

int	main(int argc, char	**argv)
{
	if (argc != 2)
	{
		ft_printf("ERROR\n");
		return (1);
	}
	else if (ft_validate(ft_format(argv[1])) != 16)
	{
		ft_printf("ERROR\n");
		return (1);
	}
	ft_print_output(g_matrix);
	return (0);
}
