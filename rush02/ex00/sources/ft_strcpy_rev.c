/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_rev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anantony <anantony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:39:11 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/28 22:36:26 by anantony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy_rev(char *src, char *dest)
{
	char	*tmp;
	int		i;
	int		x;

	tmp = (char *)malloc(sizeof(char) * 1000);
	i = 0;
	while (src[i] != '\0')
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = '-';
	i++;
	x = 0;
	while (dest[x] != '\0')
	{
		tmp[i] = dest[x];
		i++;
		x++;
	}
	tmp[i] = '\0';
	return (tmp);
}
