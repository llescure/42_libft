/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 23:32:51 by llescure          #+#    #+#             */
/*   Updated: 2020/11/01 23:49:26 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int				i;
	unsigned int				j;
	unsigned int				size;

	size = ft_strlen(dst);
	i = size;
	j = 0;
	if (dstsize == 0)
		return (0);
	while (i < dstsize - 1)
	{
		dst[i] = src[j];
		printf("%c\n", dst[i]);
		i++;
		j++;
	}
	dst[i] = '\0';
	if (dstsize <= size)
		return (dstsize + ft_strlen((char *)src));
	else
		return (size + ft_strlen((char *)src));
}
