/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lea <llescure@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 21:56:16 by lea               #+#    #+#             */
/*   Updated: 2020/09/25 16:12:34 by lea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void				*ptr;
	char				*str;
	unsigned int		i;

	i = 0;
	if (!(ptr = malloc(count * size)))
		return (NULL);
	str = ptr;
	while (i < count * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
