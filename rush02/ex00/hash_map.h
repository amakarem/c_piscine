/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_map.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anantony <anantony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 20:36:51 by anantony          #+#    #+#             */
/*   Updated: 2024/04/27 22:05:11 by anantony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASH_MAP_H
# define HASH_MAP_H

typedef struct item
{
	char	*key;
	char	*value;
}	t_item;

int		ft_putstr(char *str);
int		check_is_valid(char *str);
int		trans_content(char *filename, t_item **items, char *c);
int		ft_strcmp(const char *s1, const char *s2);
t_item	*linear_search(t_item *items, int size, const char *key);
t_item	*create_item(char *key, char *value);
char	*ft_strdup(char *src);
void	populate_array(t_item **items, char *c);

#endif