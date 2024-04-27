/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trial_hash_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anantony <anantony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:25:42 by anantony          #+#    #+#             */
/*   Updated: 2024/04/27 21:38:18 by anantony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct item
{
	char	*key;
	char	*value;
}	t_item;

int		ft_strcmp(const char *s1, const char *s2);
t_item	*linear_search(t_item *items, int size, const char *key);
t_item	*create_item(char *key, char *value);
char	*ft_strdup(char *src);
void	populate_array(t_item **items, char *c);

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

t_item	*create_item(char *key, char *value)
{
	t_item	*new_item;

	new_item = malloc(sizeof(t_item));
	if (new_item == NULL)
	{
		return (NULL);
	}
	new_item->key = ft_strdup(key);
	new_item->value = ft_strdup(value);
	if (new_item->key == NULL || new_item->value == NULL)
	{
		free(new_item);
		return (NULL);
	}
	return (new_item);
}

char	*ft_strdup(char *src)
{
	int		src_length;
	char	*char_array;

	src_length = 0;
	while (src[src_length] != '\0')
		src_length++;
	char_array = (char *) malloc(sizeof(char) * (src_length + 1));
	if (!char_array)
		return (NULL);
	src_length = 0;
	while (src[src_length] != '\0')
	{
		char_array[src_length] = src[src_length];
		src_length++;
	}
	char_array[src_length] = '\0';
	return ((char *)char_array);
}

void	populate_array(t_item **items, char *c)
{
	int		counter;
	int		inner_counter;
	int		inner_str_counter;
	char	temp_key[100];
	char	temp_value[100];

	counter = 0;
	inner_counter = 0;
	while (c[counter] != '\0')
	{
		inner_str_counter = 0;
		while (c[counter] != ':')
			temp_key[inner_str_counter++] = c[counter++];
		temp_key[inner_str_counter++] = '\0';
		counter += 2;
		inner_str_counter = 0;
		while (c[counter] != '\n')
			temp_value[inner_str_counter++] = c[counter++];
		temp_value[inner_str_counter++] = '\0';
		items[inner_counter++] = create_item(temp_key, temp_value);
		counter++;
	}
}

// void	trans_content(t_item **items, char *c)
// {
// 	int	fd;
// 	int	sz;

// 	fd = open("numbers.dict", O_RDONLY);
// 	if (fd < 0)
// 	{
// 		perror("r1");
// 		return ;
// 	}

// 	sz = read(fd, c, 999);
// 	c[sz] = '\0';

// 	populate_array(items, c);

// 	if (close(fd) < 0)
// 	{
// 		perror("c1");
// 		return ;
// 	}
// }

// int main() {
//     // Example input string
//     char	*c;
// 	c = (char *)malloc(sizeof(char) * 1000);
	
//     // Maximum number of items
//     int max_items = 100;

//     // Create an array of pointers to t_item structures
//     t_item *item_array[max_items];

//     // Populate the array with t_item objects
//     // populate_array(item_array, input);
// 	trans_content(item_array, c);

//     // Print the key-value pairs in the array
//     for (int i = 0; i < max_items; i++) {
//         printf("Item %d:\n", i + 1);
//         printf("  Key: %s\n", item_array[i]->key);
//         printf("  Value: %s\n", item_array[i]->value);
//     }

//     // // Search for a key in the array
//     // const char *search_key = "key2";
//     // t_item *found_item = linear_search(*item_array, max_items, search_key);
//     // if (found_item != NULL) {
//     //     printf("Item with key '%s' found:\n", search_key);
//     //     printf("  Key: %s\n", found_item->key);
//     //     printf("  Value: %s\n", found_item->value);
//     // } else {
//     //     printf("Item with key '%s' not found.\n", search_key);
//     // }

//     // Free memory allocated for the array elements
//     // for (int i = 0; i < max_items; i++) {
//     //     free(item_array[i]->key);
//     //     free(item_array[i]->value);
//     //     free(item_array[i]);
//     // }

//     return 0;
// }
