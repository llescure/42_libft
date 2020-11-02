/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 23:17:52 by llescure          #+#    #+#             */
/*   Updated: 2020/11/02 20:40:56 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dest, const void *src, size_t len)
{
	char						*tempdest;
	const char					*tempsrc;
	char						*tempcpy;
	unsigned int				i;

	i = 0;
	tempdest = dest;
	tempsrc = src;
	if (!(tempcpy = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		tempcpy[i] = tempsrc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		tempdest[i] = tempcpy[i];
		i++;
	}
	free(tempcpy);
	return (tempdest);
}
