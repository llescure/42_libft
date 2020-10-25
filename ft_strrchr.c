/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 23:36:37 by llescure          #+#    #+#             */
/*   Updated: 2020/10/25 22:28:06 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;
	int compt;

	compt = 0;
	i = 0;
	while (i <= ft_strlen(str))
	{
		if (str[i] == c)
			compt = i;
		i++;
	}
	if (compt == 0)
		return (0);
	return ((char *)&str[compt]);
}
