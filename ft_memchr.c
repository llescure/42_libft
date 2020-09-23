/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lea <llescure@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 16:42:48 by lea               #+#    #+#             */
/*   Updated: 2020/09/23 17:54:14 by lea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

const void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int i;
	const char *str;

	i = 0;
	str = s;
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == (unsigned char) c)
			return ((char *) &str[i]);
		i++;
	}
	return (NULL);
}
