/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 00:06:52 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/15 15:17:45 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

/* un comment this part to test *
#include <stdio.h>
int	main(void)
{
	int a;
	int b;
	int *pointer_a;
	int *pointer_b;

	a = 5;
	b = 9;
	pointer_a = &a;
	pointer_b = &b;
	ft_swap(pointer_a, pointer_b);
	printf("%d", a);
	printf("%d", b);

}
*/