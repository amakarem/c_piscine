/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:58:16 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/17 18:12:55 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}

// #include <stdio.h>
// int main(void)
// {
// 	char* s1 = "abcdeFg";
// 	char* s2 = "abcdefg";

// 	printf("%d\n", ft_strcmp(s1, s2));
// }