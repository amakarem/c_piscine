/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_output.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 22:14:16 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/20 22:21:44 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//int	g_matrix[4][4];
//int	g_output[4][4];
void	ft_putchar(char c);

void	ft_print_output(int arr[4][4])
{
	int	row;
	int	col;
	char	x;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			x = arr[row][col] + '0';
			ft_putchar(x);
			ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
