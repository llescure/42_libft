/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 23:16:13 by llescure          #+#    #+#             */
/*   Updated: 2020/10/17 23:16:17 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

const void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int				i;
	const char					*str;

	i = 0;
	str = s;
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
