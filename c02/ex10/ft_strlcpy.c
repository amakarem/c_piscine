/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:50:32 by aelaaser          #+#    #+#             */
/*   Updated: 2025/07/19 14:55:20 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	src[] = "Hello World";
// 	char	dest[] = "xxxxx";

// 	printf("%d\n \n", ft_strlcpy(dest, src, 5));
// 	printf("%s\n \n", dest);
// 	printf("%d\n", ft_strlcpy(dest, src, 11));
// 	printf("%s\n \n", dest);
// }