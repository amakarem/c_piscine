/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:13:55 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/21 06:19:35 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0' && to_find[x] != '\0')
	{
		x = 0;
		while (str[i + x] == to_find[x])
		{
			if (to_find[x + 1] == '\0')
			{
				return (str + i);
			}
			x++;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char s1[] = "asdsddsd hmed for 42 test sadsdasdad";
//     char s2[] = "hmed for 42 test asdsdas";
//     char* p;

// 	p = strstr(s1, s2);

//     if (p) {
//         printf("String found\n");
//         printf("First occurrence of string '%s' in '%s' is "
//                "'%s'",
//                s2, s1, p);
//     }
//     else
// 	{
//         printf("String not found\n");
// 	}
// 	printf("\n");
//    p = ft_strstr(s1, s2);

//     if (p) {
//         printf("String found\n");
//         printf("First occurrence of string '%s' in '%s' is "
//                "'%s'",
//                s2, s1, p);
//     }
//     else
//         printf("String not found\n");
// }