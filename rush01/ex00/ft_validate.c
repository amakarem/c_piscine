/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 23:17:40 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/20 23:19:09 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_validate(int validate_input, int arr[4][4])
{
	int	col;
	int	sumval;

	col = 0;
	sumval = 0;
	while (col < 4)
	{
		sumval = arr[0][col] + arr[1][col];
		if (sumval > 5 || sumval < 3)
		{
			return (sumval);
		}
		sumval = arr[2][col] + arr[3][col];
		if (sumval > 5 || sumval < 3)
		{
			return (sumval);
		}
		col++;
	}
	return (validate_input);
}
