/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 19:38:59 by sbourqui          #+#    #+#             */
/*   Updated: 2025/08/27 22:10:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int*a, int*b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
#include <stdio.h>
/*int main () 
{
    int x; 
    int y; 
    
    x = 69;
    y = 29;

    printf ("avant le swap: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf ("apres swap : x = %d, y = %d\n", x, y);
}