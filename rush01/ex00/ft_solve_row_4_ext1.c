/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_row_4_ext1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 03:00:53 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/21 04:45:59 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	update_val(int row, int col,int n);

int	ft_solve_row_4_ext1(int g_in[4][4])
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (g_in[2][row] == 1 && g_in[3][row] == 3)
			update_val(row, 1, 3);
		if (g_in[3][row] == 1 && g_in[2][row] == 3)
			update_val(row, 2, 3);
		if (g_in[2][row] == 1 && g_in[3][row] == 2)
		{
			update_val(row, 1, 1);
			update_val(row, 2, 2);
		}
		if (g_in[3][row] == 1 && g_in[2][row] == 2)
		{
			update_val(row, 1, 2);
			update_val(row, 2, 1);
		}
		row++;
	}
	return (0);
}
