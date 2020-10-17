/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 23:30:50 by llescure          #+#    #+#             */
/*   Updated: 2020/10/17 23:30:54 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char const *str)
{
	unsigned int						i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int						i;
	unsigned int						j;
	char								*rslt;

	if (!(rslt = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		rslt[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		rslt[i] = s2[j];
		i++;
		j++;
	}
	rslt[i] = '\0';
	return (rslt);
}
