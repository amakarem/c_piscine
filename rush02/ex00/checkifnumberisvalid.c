/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkifnumberisvalid.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstumpf <rstumpf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:25:22 by rstumpf           #+#    #+#             */
/*   Updated: 2024/04/27 20:15:05 by rstumpf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_is_valid(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < '0' || str[counter] > '9')
		{
			return (0);
			counter++;
		}
	}
	return (1);
}
