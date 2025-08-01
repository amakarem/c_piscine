/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:54:28 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/16 16:58:14 by aelaaser         ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
{
	int	i;
	int	size;

	size = ft_strlen(str);
	i = 0;
	while (i <= size)
	{
		if (str[i] < 32 || str[i] > 126)
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
// 	char	notlpha[] = "\x01\x05\x0a\x15";
// 	int	out;

// 	out = ft_str_is_printable(empty);
// 	printf("%d\n", out);
// 	out = ft_str_is_printable(alpha);
// 	printf("%d\n", out);
// 	out = ft_str_is_printable(notlpha);
// 	printf("%d\n", out);
// }