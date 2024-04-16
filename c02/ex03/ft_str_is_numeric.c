/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:12:22 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/16 16:50:10 by aelaaser         ###   ########.fr       */
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

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	size;

	size = ft_strlen(str);
	i = 0;
	while (i <= size)
	{
		if ((str[i] > '9' || str[i] < '0'))
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
// 	char	alpha[] = "102123555325";
// 	char	notlpha[] = "12354566875x";
// 	int	out;

// 	out = ft_str_is_numeric(empty);
// 	printf("%d\n", out);
// 	out = ft_str_is_numeric(alpha);
// 	printf("%d\n", out);
// 	out = ft_str_is_numeric(notlpha);
// 	printf("%d\n", out);
// }