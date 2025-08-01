/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:00:17 by aelaaser          #+#    #+#             */
/*   Updated: 2024/05/01 17:22:57 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_create_str(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < size && strs[i])
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + (ft_strlen(sep) * (size - 1));
	if (size <= 0)
		len = 1;
	str = (char *)malloc(sizeof(char) * len);
	if (str == NULL)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		x;
	int		y;
	int		i;
	char	*str;

	str = ft_create_str(size, strs, sep);
	i = 0;
	x = -1;
	while (++x < size)
	{
		y = 0;
		while (strs[x][y])
		{
			str[i++] = strs[x][y];
			y++;
		}
		y = 0;
		while (sep[y] && x < size - 1)
		{
			str[i++] = sep[y];
			y++;
		}
	}
	str[i] = '\0';
	return (str);
}
