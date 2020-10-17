/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 23:18:15 by llescure          #+#    #+#             */
/*   Updated: 2020/10/17 23:19:15 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int		i;
	char				*temp;

	i = 0;
	temp = b;
	while (i < len)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	return (temp);
}
