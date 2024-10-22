/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:49:49 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/10/15 10:49:52 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*nbr;

	if (min >= max)
		return (0);
	i = max - min;
	nbr = (int *)malloc(sizeof(int) * (i));
	if (nbr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		nbr[i] = min;
		min++;
		i++;
	}
	return (nbr);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_range(5, 10));
	printf("%d\n", ft_range(20, 50));
	printf("%d\n", ft_range(100, 10));
	printf("%d", ft_range(10, 10));
	return(0);
}*/