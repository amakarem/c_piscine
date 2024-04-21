/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:38:44 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/21 06:54:18 by aelaaser         ###   ########.fr       */
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
	unsigned int	total_size;
	unsigned int	i;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	total_size = src_size + size;
	if (size > dest_size)
	{
		total_size = total_size + src_size;
	}
	if (total_size > (dest_size + src_size))
	{
		total_size = (dest_size + src_size);
	}
	i = dest_size;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (i != dest_size)
		dest[dest_size] = '\0';
	return (total_size);
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