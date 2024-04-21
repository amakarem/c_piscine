/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_output.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 22:14:16 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/21 02:29:03 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_print_output(int arr[4][4])
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
	return (0);
}
