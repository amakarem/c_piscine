/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:51:24 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/16 16:53:14 by aelaaser         ###   ########.fr       */
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
	return (len - 1);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	size;

	size = ft_strlen(str);
	i = 0;
	while (i <= size)
	{
		if ((str[i] > 'Z' || str[i] < 'A'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	empty[] = "";
// 	char	alpha[] = "ASDHHEKKEKE";
// 	char	notlpha[] = "abcXefgHhffB";
// 	int	out;

// 	out = ft_str_is_uppercase(empty);
// 	printf("%d\n", out);
// 	out = ft_str_is_uppercase(alpha);
// 	printf("%d\n", out);
// 	out = ft_str_is_uppercase(notlpha);
// 	printf("%d\n", out);
// }