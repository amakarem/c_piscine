/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:19:26 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/15 15:25:05 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_a;
	int	tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	*a = (*a / *b);
	*b = (tmp_a % tmp_b);
}

/* un comment this part to test 
#include <stdio.h>
int	main(void)
{
	int a;
	int b;

	a = 9;
	b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("%c", '\n');
	printf("%d", b);

}
*/