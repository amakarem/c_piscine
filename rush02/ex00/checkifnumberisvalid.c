/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkifnumberisvalid.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:25:22 by rstumpf           #+#    #+#             */
/*   Updated: 2024/04/27 20:46:06 by aelaaser         ###   ########.fr       */
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
		}
		counter++;
	}
	return (1);
}
