/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_row_4_ext1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 03:00:53 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/21 03:01:34 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_solve_row_4_ext1(int g_in[4][4], int g_out[4][4])
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (g_in[2][row] == 1 && g_in[3][row] == 3)
			g_out[row][1] = 3;
		if (g_in[3][row] == 1 && g_in[2][row] == 3)
			g_out[row][2] = 3;
		if (g_in[2][row] == 1 && g_in[3][row] == 2 && g_out[row][1] == 0)
		{
			g_out[row][1] = 1;
			if (g_out[row][2] == 0)
				g_out[row][2] = 2;
		}
		if (g_in[3][row] == 1 && g_in[2][row] == 2 && g_out[row][1] == 0)
		{
			g_out[row][1] = 2;
			if (g_out[row][2] == 0)
				g_out[row][2] = 1;
		}
		row++;
	}
	return (0);
}