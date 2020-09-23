/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lea <llescure@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 12:56:29 by lea               #+#    #+#             */
/*   Updated: 2020/09/23 14:59:12 by lea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int i;
	char *tempdest;
	const char *tempsrc;

	i = 0;
	tempdest = dest;
	tempsrc = src;
	while (i < n)
	{
		tempdest[i] = tempsrc[i];
		if (tempsrc[i] == (unsigned char)c)
			return &(tempdest[i + 1]);
		i++;
	}
	return (NULL);
}
