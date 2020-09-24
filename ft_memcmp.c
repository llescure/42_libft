/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lea <llescure@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 21:31:06 by lea               #+#    #+#             */
/*   Updated: 2020/09/24 21:53:25 by lea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int i;
	const char *temps1;
	const char *temps2;

	i = 0;
	temps1 = s1;
	temps2 = s2;
	while (i < n)
	{
		if (temps1[i] != temps2[i])
			return ((unsigned char)temps1[i] - (unsigned char) temps2[i]);
		i++;
	}
	return (0);
}
