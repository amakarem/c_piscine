/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_col_find_4_ext.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 03:19:00 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/21 04:40:40 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	update_val(int row, int col,int n);

int	ft_col_find_4_ext1(int i, int g_out[4][4])
{
	int	x;

	x = 1;
	while (g_out[x][i] == 0 && x < 4 && g_out[x + 1][i] <= 3)
	{
		if (g_out[x + 1][i] != 0)
			update_val(x, i, g_out[x + 1][i] + 1);
		x++;
	}
	return (0);
}

int	ft_col_find_4_ext2(int i, int g_out[4][4])
{
	int	x;

	x = 2;
	while (g_out[x][i] == 0 && x >= 0 && g_out[x + 1][i] <= 3)
	{
		if (g_out[x + 1][i] != 0)
			update_val(x, i, g_out[x + 1][i] + 1);
		x--;
	}
	return (0);
}
