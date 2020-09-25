/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lea <llescure@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 11:30:28 by lea               #+#    #+#             */
/*   Updated: 2020/09/25 14:29:53 by lea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char 	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
					unsigned int i;
					unsigned int j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *) haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i] && i < len)
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i - j]);
		}
		i = i - j;
		i++;
	}
	return (NULL);
}
