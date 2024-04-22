/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:10:04 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/22 18:15:42 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char *str = "";
// 	//printf("%i\n", strlen(str));
// 	printf("%d\n", ft_strlen(str));
// 	return (0);
// }