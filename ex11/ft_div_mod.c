/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:04:19 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/10/14 16:10:24 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int	main(void)
{
	int a;
	int b;
	int div;
	int mod;
	
	a = 10;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("Div = %i e Mod = %i", div, mod);
	return(0);
}*/