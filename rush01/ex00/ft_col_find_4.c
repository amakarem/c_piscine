/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_col_find_4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 04:54:29 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/21 05:00:59 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	update_val(int row, int col, int n);
int	ft_col_find_4_ext1(int i, int g_out[4][4]);
int	ft_col_find_4_ext2(int i, int g_out[4][4]);

int	ft_col_find_4(int g_in[4][4], int g_out[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (g_in[0][i] <= g_in[1][i] && g_out[0][i] == 0)
		{
			update_val(0, i, 4 - g_in[0][i] + 1);
			ft_col_find_4_ext1(i, g_out);
		}
		else if (g_in[0][i] >= g_in[1][i] && g_out[0][i] == 0)
		{
			update_val(3, i, 4 - g_in[1][i] + 1);
			ft_col_find_4_ext2(i, g_out);
		}
		i++;
	}
	return (0);
}
