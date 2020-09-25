/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lea <llescure@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:59:43 by lea               #+#    #+#             */
/*   Updated: 2020/09/25 16:10:21 by lea              ###   ########.fr       */
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
