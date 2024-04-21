/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_col_4_ext1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 02:48:04 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/21 04:42:33 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	update_val(int row, int col,int n);

int	ft_solve_col_4_ext1(int g_in[4][4])
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (g_in[0][col] == 1 && g_in[1][col] == 3)
			update_val(1, col, 3);
		else if (g_in[1][col] == 1 && g_in[0][col] == 3)
			update_val(2, col, 3);
		col++;
	}
	return (0);
}
