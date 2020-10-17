/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 23:17:25 by llescure          #+#    #+#             */
/*   Updated: 2020/10/17 23:17:29 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int		i;
	const char			*tempsrc;
	char				*tempdest;

	i = 0;
	tempsrc = src;
	tempdest = dst;
	while (i < n)
	{
		tempdest[i] = tempsrc[i];
		i++;
	}
	return (tempdest);
}
