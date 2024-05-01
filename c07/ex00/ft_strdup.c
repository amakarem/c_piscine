/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:03:53 by aelaaser          #+#    #+#             */
/*   Updated: 2024/05/01 19:00:39 by aelaaser         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	start;
	int	i;

	start = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[start] = src[i];
		i++;
		start++;
	}
	dest[start] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);
	dest = ft_strcat(dest, src);
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*src = "welcome";
// 	char	*dest;
// 	dest = ft_strdup(src);
// 	printf("%s\n", dest);
// 	free(dest);
// }