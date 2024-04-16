/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:06:18 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/16 23:27:32 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	dest[] = "xxxxxxxxxxx";
// 	char	src[] = "Hello World";

// 	printf("%s\n", dest);
// 	ft_strcpy(dest, src);
// 	printf("%s\n", dest);
// }