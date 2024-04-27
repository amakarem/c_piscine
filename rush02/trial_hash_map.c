/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trial_hash_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anantony <anantony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:25:42 by anantony          #+#    #+#             */
/*   Updated: 2024/04/27 20:04:03 by anantony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strcmp(const char *s1, const char *s2);

typedef struct item
{
	char	*key;
	char	*value;
}	t_item;

int	ft_strcmp(const char *s1, const char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] != '\0' && s2[counter] != '\0')
	{
		if (s1[counter] != s2[counter])
		{
			return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
		}
		counter++;
	}
	return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
}

t_item	*linear_search(t_item *items, int size, const char *key)
{
	int	counter;

	counter = 0;
	while (counter < size)
	{
		if (ft_strcmp(items[counter].key, key) == 0)
		{
			return (&items[counter]);
		}
		counter++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	t_item items[] = {
// 		{"foo", "10"}, {"bar", "42"}, {"bazz", "36"}, {"buzz", "7"},
// 		{"bob", "11"}, {"jane", "100"}, {"x", "200"}};
// 	int num_items = sizeof(items) / sizeof(t_item);

// 	t_item *found = linear_search(items, num_items, "bazz");
// 	if (!found)
// 	{
// 		return (1);
// 	}
// 	printf("linear_search: value of 'bob' is %s\n", found->value);
// 	return (0);
// }
