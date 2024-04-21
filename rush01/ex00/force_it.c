/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   force_it.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 05:43:11 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/21 05:45:29 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	update_val(int row, int col, int n);

int	force_it(void)
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (update_val(row, col, 1) == 0)
				if (update_val(row, col, 2) == 0)
					if (update_val(row, col, 3) == 0)
						update_val(row, col, 4);
			col++;
		}
		row++;
	}
	return (0);
}
