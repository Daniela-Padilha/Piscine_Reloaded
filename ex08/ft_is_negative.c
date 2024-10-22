/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:01:24 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/10/14 15:18:52 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}

/*#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(void)
{
	ft_is_negative(1);
	ft_is_negative(-2);
	ft_is_negative(0);
	return(0);
}*/