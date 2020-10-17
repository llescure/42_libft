/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 23:17:52 by llescure          #+#    #+#             */
/*   Updated: 2020/10/17 23:17:56 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int				i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char						*tempdest;
	const char					*tempsrc;
	unsigned int				i;

	i = 0;
	tempdest = dst;
	tempsrc = src;
	if (len > ft_strlen(tempdest))
	{
		while (i < len)
		{
			tempdest[i] = tempsrc[i];
			i++;
		}
		tempdest[i] = '\0';
		return (tempdest);
	}
	while (i < len)
	{
		tempdest[i] = tempsrc[i];
		i++;
	}
	return (tempdest);
}
