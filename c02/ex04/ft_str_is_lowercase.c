/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:43:52 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/16 16:47:34 by aelaaser         ###   ########.fr       */
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

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	size;

	size = ft_strlen(str);
	i = 0;
	while (i <= size)
	{
		if ((str[i] > 'z' || str[i] < 'a'))
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
// 	char	alpha[] = "abcdefghhffb";
// 	char	notlpha[] = "abcXefgHhffB";
// 	int	out;

// 	out = ft_str_is_lowercase(empty);
// 	printf("%d\n", out);
// 	out = ft_str_is_lowercase(alpha);
// 	printf("%d\n", out);
// 	out = ft_str_is_lowercase(notlpha);
// 	printf("%d\n", out);
// }