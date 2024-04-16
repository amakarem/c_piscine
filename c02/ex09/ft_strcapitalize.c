/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:51:03 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/16 18:10:02 by aelaaser         ###   ########.fr       */
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
	int	size;
	int	starting;

	starting = 1;
	size = ft_strlen(str);
	i = 0;
	while (i <= size)
	{
		if (starting == 1 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			starting = 0;
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		else
		{
			starting = 1;
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