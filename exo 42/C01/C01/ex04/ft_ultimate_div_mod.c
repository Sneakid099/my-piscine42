/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 23:14:37 by sbourqui          #+#    #+#             */
/*   Updated: 2025/08/27 22:22:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*#include <stdio.h>
int	main()
{
	int a = 13;
	int b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("division = %d\n", a);
	printf("modulo   = %d\n", b);
	return (0);
}