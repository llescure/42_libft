/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lea <llescure@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 19:13:50 by lea               #+#    #+#             */
/*   Updated: 2020/09/23 12:12:57 by lea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int i;
	char *temp;

	i = 0;
	temp = b;
	while (i < len)
	{
		temp[i] = (unsigned char) c;
		i++;
	}
	return (temp);
}
