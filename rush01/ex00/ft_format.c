/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 02:07:01 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/21 02:27:04 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_format(char *str, int g_matrix[4][4])
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
