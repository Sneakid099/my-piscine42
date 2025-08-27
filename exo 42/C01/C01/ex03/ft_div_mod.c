/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:53:11 by sbourqui          #+#    #+#             */
/*   Updated: 2025/08/27 22:10:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
int main ()
{
    int a;
    int b; 
    int d;
    int m;
    
    a = 13;
    b = 5;
    ft_div_mod (a, b, &d, &m);
    printf ("a = %d, b = %d\n", a, b);
    printf ("division = %d\n", d);
    printf("modulo = %d\n", m);
}  