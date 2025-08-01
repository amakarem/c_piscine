/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:04:39 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/15 15:17:15 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/* un comment this part to test 
#include <stdio.h>
int	main(void)
{
	int a;
	int b;
	int x;
	int y;

	a = 9;
	b = 4;

	ft_div_mod(a , b, &x, &y);
	printf("%d", x);
	printf("%c", '\n');
	printf("%d", y);

}
*/