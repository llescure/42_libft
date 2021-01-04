/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llescure <llescure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 18:25:53 by llescure          #+#    #+#             */
/*   Updated: 2021/01/04 22:14:14 by llescure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "stdio.h"

unsigned long		ft_count_words2(char const *s, char sep)
{
	unsigned long	i;
	unsigned long	compt;

	i = 0;
	compt = 0;
	while (s[i] != '\0')
	{
		if (s[i] != sep && (s[i + 1] == sep || (s[i + 1] == '\0')))
			compt++;
		if (s[i + 1] == '\0')
			break ;
		i++;
	}
	return (compt);
}

int main(void)
{
	char	*string = "80aUh5NlgTu3AI 1laxVHGB GliqK3Qu4E z0kr7l PGxu gYc9b7Ps4Sy1f HjTZ0pBzG2qm v0a8MI7bArw UhFk3sezd20PMmfj g4ql9JBvoyiXws MVZhPtB CX38Q05Ucjq2Hf 7y9PGXij2aFtQ EArcMKn1 CRxiIXMrha1LF9Yp deLs0ZIWYQAR6FfN";
	unsigned long i;
	char **rslt;

	i = 0;
	rslt = ft_split(string, ' ');
	while (i <= ft_count_words2(string, ' '))
	{
		printf("%s\n", rslt[i]);
		i++;
	}
	
	// TEST MEMCHR

#include "string.h"

	char *s = "coucou \0";
	char c = '\0';
	char *s2 = "coucou \0";
	char c2 = '\0';
	printf("actual function:%s\n", memchr(s, c, 10));
	printf("my function:%s\n", ft_memchr(s2, c2, 10));
}
