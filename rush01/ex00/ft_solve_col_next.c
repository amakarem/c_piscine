/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_col_next.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 03:04:29 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/21 04:53:00 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	update_val(int row, int col, int n);

int	ft_solve_col_next(int g_out[4][4])
{
	int	col;
	int	row;

	col = 0;
	while (col < 4)
	{
		row = 0;
		while (row < 4)
		{
			if (g_out[row][col] != 0 && g_out[row][col] <= 4)
			{
				if (g_out[row + 1][col] == 0)
				{
					update_val(row + 1,col, g_out[row][col] + 1);
				}
				if (g_out[row + 1][col] == 5)
				{
					update_val(row + 1,col, 1);
				}
			}
			row++;
		}
		col++;
	}
	return (0);
}
