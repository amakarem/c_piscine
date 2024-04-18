/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:14:00 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/18 20:34:24 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < (n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char* s1 = "abaGXadss";
// 	char* s2 = "abaGaadss";

// 	printf("%d\n", strncmp(s1, s2, 5));
// 	printf("%d\n", ft_strncmp(s1, s2, 5));
// }