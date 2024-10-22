/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:53:33 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/10/14 16:54:21 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb > 0)
	{
		while (i <= nb / 2)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i", ft_sqrt(25));
	return (0);
} */