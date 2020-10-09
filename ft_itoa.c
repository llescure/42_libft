/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lea <llescure@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 23:56:20 by lea               #+#    #+#             */
/*   Updated: 2020/09/27 12:24:20 by lea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_find_size(int n)
{
	int compt;

	compt = 0;
	if (n < 0)
		compt++;
	while (n / 10 != 0)
	{
		n = n / 10;
		compt++;
	}
	return (compt);
}

char	*ft_itoa(int n)
{
	char		*rslt;
	long		store;
	int			i;
	int			j;

	store = n;
	if (!(rslt = malloc(sizeof(char) * ft_find_size(n) + 1)))
		return (NULL);
	i = ft_find_size(n);
	j = 0;
	if (store < 0)
	{
		rslt[j] = '-';
		store = store * -1;
		j++;
	}
	while (i >= j)
	{
		rslt[i] = '0' + store % 10;
		store = store / 10;
		i--;
	}
	rslt[ft_find_size(n) + 1] = '\0';
	return (rslt);
}
