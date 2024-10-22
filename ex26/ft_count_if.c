/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddo-carm <ddo-carm@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:23:40 by ddo-carm          #+#    #+#             */
/*   Updated: 2024/10/15 18:17:20 by ddo-carm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	j;
	int	res;

	i = 0;
	j = 0;
	res = 0;
	while (tab[i] != NULL)
	{
		if (f(&tab[i][j]))
			res++;
		j++;
	}
	i++;
	return (res);
}

/*#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
int main(int argc, char **argv)
{
	printf("%i", ft_count_if(&argv[argc - 1], &ft_str_is_lowercase));
	return(0);
}*/
