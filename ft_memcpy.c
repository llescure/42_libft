/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lea <llescure@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:35:52 by lea               #+#    #+#             */
/*   Updated: 2020/09/25 16:01:54 by lea              ###   ########.fr       */
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
