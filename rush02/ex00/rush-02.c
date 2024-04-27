/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:17:39 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/27 20:47:06 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_putstr(char *str);
int	check_is_valid(char *str);

int main(int argc, char *argv[])
{
	int	input;

	input = 1;
	if (argc == 3)
		input = 2;
	else if (argc < 2)
		ft_putstr("Error\n");
	else if (check_is_valid(argv[input]) == 0)
		ft_putstr("Error\n");

	ft_putstr("\n\n");
	ft_putstr(argv[input]);
	return (0);
}
