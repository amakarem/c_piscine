/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joltmann <joltmann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:06:21 by joltmann          #+#    #+#             */
/*   Updated: 2024/04/20 13:52:28 by joltmann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_conds(char *str, int (*conds)[81], int *size)
{
	int	wc;
	int	dir;
	int	pos;

	*size = 0;
	wc = 0;
	while (str[*size + wc])
	{
		if (str[*size + wc] == ' ')
			wc++;
		else if (!(str[*size + wc] >= '0' && str[*size + wc] <= '9'))
			return (0);
		else
			*size = *size + 1;
	}
	if (*size % 4)
		return (0);
	*size /= 4;
	dir = 0;
	pos = 0;
	while (*str)
	{
		if (*str != ' ')
		{
			if (pos >= *size)
			{
				pos = 0;
				dir++;
			}
			(*conds)[dir * 4 * *size + pos] = *str - '0';
			pos++;
		}
		str++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	length;
	int	conds[81];
	int	size;
 	char *str = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";

	length = 0;
	while (argv[length])
		length++;
	if (length < 2 && 0 == 1) // Delete &&
		return (0);
	if (!get_conds(str, &conds, &size)) //argv[1]
		return (0);
	
	return (0);
}

// col1up
// col2up
// col3up
// col4up
// col1down
// col2down
// col3down
// col4down
// row1left
// row2left
// row3left
// row4left
// row1right
// row2right
// row3right
// row4right