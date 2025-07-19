/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:38:44 by aelaaser          #+#    #+#             */
/*   Updated: 2025/07/19 14:59:39 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	i;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size <= dest_size)
		return (size + src_size);
	i = 0;
	while (src[i] && (dest_size + i) < size - 1)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	unsigned int testval = 6;
// 	char dest[] = "sss555";
// 	char src[] = "eeee";	
// 	printf("%d\n", ft_strlcat(dest, src, testval));
// 	printf("%lu\n", strlcat(dest, src, testval));
// 	printf("%s\n", dest);
// 	printf("%s\n", src);
// }