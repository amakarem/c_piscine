/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:36:25 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/16 23:32:56 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	src[] = "Hello World";
	char	dest[] = "xxxxx";

	printf("%s\n \n", src);
	printf("%s\n \n", dest);
	ft_strncpy(dest, src, 5);
	printf("%s\n", dest);
}