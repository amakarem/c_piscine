/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_map.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anantony <anantony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 20:36:51 by anantony          #+#    #+#             */
/*   Updated: 2024/04/28 21:37:57 by anantony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASH_MAP_H
# define HASH_MAP_H
# define BUFFER_SIZE 1024

typedef struct item
{
	char	*key;
	char	*value;
	int		size;
}	t_item;

int		ft_putstr(char *str);
int		check_is_valid(char *str);
int		trans_content(char *filename, t_item ***items);
int		ft_strcmp(const char *s1, const char *s2);
char	*linear_search(t_item **items, int size, const char *key);
char	*ft_strdup(char *src);
void	populate_array(t_item ***items, char *c);
int		str_lenth(char *str);
char	*nbr_to_str(int nb);
char	*ft_strcpy_rev(char *src, char *dest);
int		dict_size_counter(char *c);

#endif