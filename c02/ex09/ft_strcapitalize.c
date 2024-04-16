/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:51:03 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/17 00:35:27 by aelaaser         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	starting;
	int	c;

	starting = 1;
	i = 0;
	while (i <= ft_strlen(str))
	{
		c = str[i];
		if (starting == 1 && str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		else if (starting == 0 && str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		if (c < '0' || (c > '9' && c < 65) || (c > 90 && c < 97) || c > 122)
		{
			starting = 1;
		}
		else
		{
			starting = 0;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char alpha[] = "salut, comment tu vas ? 42mots quarte-dex; ciuante+et+un";

// 	printf("%s\n", ft_strcapitalize(alpha));
// }