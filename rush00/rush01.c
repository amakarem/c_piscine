/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:30:52 by aelaaser          #+#    #+#             */
/*   Updated: 2024/04/12 23:04:52 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void rush(int x, int y)
{
    int v;
    int h;

    v=1;
    while (v <= y)
    {
        h=1;
        while (h <= x)
        {
            if(h == 1) {
                if(v == 1) {
                    ft_putchar('/');
                } else if (v == y) {
                    ft_putchar('\\');
                }else {
                    ft_putchar('*');
                }
            } else if(h == x) {
                if(v == 1) {
                    ft_putchar('\\');
                } else if (v == y) {
                    ft_putchar('/');
                }else {
                    ft_putchar('*');
                }
            } else {
                if(v != y && v != 1) {
                    ft_putchar(' ');
                } else {
                    ft_putchar('*');
                }
            }
            h++;
        }
        ft_putchar('\n');
        v++;
    }
}
