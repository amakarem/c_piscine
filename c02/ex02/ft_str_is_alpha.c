/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:12:27 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/16 16:10:59 by aelaaser         ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	size;

	size = ft_strlen(str);
	i = 0;
	while (i < size)
	{
		if ((str[i] > 'z' || str[i] < 'a') && (str[i] > 'Z' || str[i] < 'A'))
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
// 	char	alpha[] = "abcdefgHhffB";
// 	char	notlpha[] = "abc*efgHhffB";
// 	int	out;

// 	out = ft_str_is_alpha(empty);
// 	printf("%d\n", out);
// 	out = ft_str_is_alpha(alpha);
// 	printf("%d\n", out);
// 	out = ft_str_is_alpha(notlpha);
// 	printf("%d\n", out);
// }