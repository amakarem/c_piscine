/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:27:10 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/17 18:57:55 by aelaaser         ###   ########.fr       */
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

// #include <stdio.h>
// int main(void)
// {
// 	char dest[100] = "Welcome";
// 	char src[] = "Home";
// 	ft_strcat(dest, src);
// 	printf("%s", dest);
// }