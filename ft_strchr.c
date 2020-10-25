/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 23:26:56 by llescure          #+#    #+#             */
/*   Updated: 2020/10/25 22:23:30 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	if (c == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		if (c == str[i])
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
