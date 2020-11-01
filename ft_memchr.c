/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 23:16:13 by llescure          #+#    #+#             */
/*   Updated: 2020/11/01 21:53:55 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int				i;
	const char					*str;

	i = 0;
	str = s;
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
