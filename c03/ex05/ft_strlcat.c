/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:38:44 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/19 18:46:10 by aelaaser         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	total_size;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	total_size = src_size + size;
	if (size > dest_size)
	{
		total_size = total_size - 1;
	}
	if (total_size > (dest_size + src_size))
	{
		total_size = (dest_size + src_size);
	}
	return (total_size);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char dest[] = "Welcomex";
// 	char src[] = "Home";
// 	printf("%d\n", ft_strlcat(dest, src, 15));
// 	printf("%lu\n", strlcat(dest, src, 0));
// 	printf("%s\n", dest);
// 	printf("%s\n", src);
// }