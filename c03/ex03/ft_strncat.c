/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:59:31 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/17 19:09:29 by aelaaser         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	start;
	unsigned int	i;

	start = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[start] = src[i];
		i++;
		start++;
	}
	dest[start] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char dest[100] = "Welcome";
// 	char src[] = "Home";
// 	ft_strncat(dest, src, 2);
// 	printf("%s", dest);
// }